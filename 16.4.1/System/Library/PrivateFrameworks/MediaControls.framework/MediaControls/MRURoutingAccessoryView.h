@class NSString, UIImageView, MRUVisualStylingProvider, UIActivityIndicatorView;

@interface MRURoutingAccessoryView : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIActivityIndicatorView *activityView;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateVisualStyling;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)visualStylingProviderDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateState;
- (void).cxx_destruct;
- (void)updateImageViewVisualStyle;

@end
