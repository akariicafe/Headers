@class NSString, UIImageView, UIImage, UILabel, UIView, MRUVisualStylingProvider;

@interface MRUControlCenterButton : UIControl <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)updateVisualStyling;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)updateContentSizeCategory;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)visualStylingProviderDidChange:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;

@end
