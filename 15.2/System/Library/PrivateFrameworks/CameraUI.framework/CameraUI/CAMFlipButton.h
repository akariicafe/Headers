@class UIImageView, NSString;

@interface CAMFlipButton : UIButton <CAMAccessibilityHUDImageProvider>

@property (readonly, nonatomic) UIImageView *_imageView;
@property (retain, nonatomic) UIImageView *_circleBackgroundView;
@property (readonly, nonatomic) BOOL _useCTMAppearance;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tappableEdgeInsets;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)flipButtonOverContent;
+ (id)flipButtonWithLayoutStyle:(long long)a0;

- (id)imageForAccessibilityHUD;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)_commonCAMFlipButtonInitializationWithStyle:(long long)a0 overContent:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)_updateImages;
- (id)mainImageNameForAccessibilityHUD:(BOOL)a0;

@end
