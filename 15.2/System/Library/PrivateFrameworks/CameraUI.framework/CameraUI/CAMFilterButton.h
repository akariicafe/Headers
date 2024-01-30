@class NSString;

@interface CAMFilterButton : UIButton <CAMAccessibilityHUDImageProvider>

@property (nonatomic) long long layoutStyle;
@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tappableEdgeInsets;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterButtonWithLayoutStyle:(long long)a0;

- (id)imageForAccessibilityHUD;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_filterOnImage;
- (id)initWithCoder:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)_filterImage;
- (void)_commonCAMFilterButtonInitializationWithStyle:(long long)a0;

@end
