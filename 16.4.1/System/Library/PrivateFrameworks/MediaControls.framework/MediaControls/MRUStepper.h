@class NSString, MRUTransportButton, UIImage, UIView, MRUVisualStylingProvider, UIImageSymbolConfiguration;
@protocol MRUStepperDelegate;

@interface MRUStepper : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UIView *decrementBackground;
@property (retain, nonatomic) UIView *incrementBackground;
@property (retain, nonatomic) MRUTransportButton *decrementButton;
@property (retain, nonatomic) MRUTransportButton *incrementButton;
@property (weak, nonatomic) id<MRUStepperDelegate> delegate;
@property (retain, nonatomic) UIImage *decrementImage;
@property (retain, nonatomic) UIImage *incrementImage;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateVisualStyling;
- (void)decreaseButtonHoldReleased:(id)a0;
- (void)increaseButtonHoldBegan:(id)a0;
- (void)visualStylingProviderDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)increaseTouchUpInside:(id)a0;
- (void)increaseButtonHoldReleased:(id)a0;
- (void)layoutSubviews;
- (void)decreaseTouchUpInside:(id)a0;
- (void).cxx_destruct;
- (void)decreaseButtonHoldBegan:(id)a0;

@end
