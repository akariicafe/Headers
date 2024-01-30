@class UIImageView, UIImage, CPBarButton, UIView, NSLayoutConstraint;

@interface CPSBarButton : CPSButton

@property (retain, nonatomic) CPBarButton *cyBarButton;
@property (nonatomic) BOOL showBackIndicator;
@property (nonatomic) BOOL usesSystemComposeGlyph;
@property (retain, nonatomic) UIImageView *backIndicatorImageView;
@property (retain, nonatomic) UIImage *backIndicatorImage;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSLayoutConstraint *backIndicatorHeightConstraint;

+ (id)buttonWithCPBarButton:(id)a0 showBackIndicator:(BOOL)a1;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_externalUnfocusedBorderColor;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)didAddSubview:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_updateButtonImage:(id)a0;
- (void)_setupBackButtonImagesIfNeccessary;
- (BOOL)_showsRoundedBackground;
- (void)_updateBackIndicatorImageView;
- (void)_resetAlpha;

@end
