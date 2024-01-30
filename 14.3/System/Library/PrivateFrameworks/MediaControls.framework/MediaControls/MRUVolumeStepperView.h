@class MRUButton, NSString, MRUVisualStylingProvider, MPVolumeController, UIView;

@interface MRUVolumeStepperView : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UIView *decreaseBackground;
@property (retain, nonatomic) UIView *increaseBackground;
@property (retain, nonatomic) MRUButton *decreaseButton;
@property (retain, nonatomic) MRUButton *increaseButton;
@property (retain, nonatomic) MPVolumeController *volumeController;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)decreaseButtonHoldReleased:(id)a0;
- (void).cxx_destruct;
- (void)increaseButtonHoldReleased:(id)a0;
- (void)increaseButtonHoldBegan:(id)a0;
- (void)layoutSubviews;
- (void)increaseTouchUpInside:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVisualStyling;
- (void)decreaseTouchUpInside:(id)a0;
- (void)decreaseButtonHoldBegan:(id)a0;
- (void)visualStylingProviderDidChange:(id)a0;

@end
