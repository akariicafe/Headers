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

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)_filterOnImage;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)imageForAccessibilityHUD;
- (void)layoutSubviews;
- (id)_filterImage;
- (void)_commonCAMFilterButtonInitializationWithStyle:(long long)a0;

@end
