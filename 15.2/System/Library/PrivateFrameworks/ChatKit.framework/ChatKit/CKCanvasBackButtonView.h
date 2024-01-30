@class UIColor, NSString, UIImageView, UILabel, UIView;

@interface CKCanvasBackButtonView : UIControl <_UICursorInteractionDelegate>

@property (retain, nonatomic) UIImageView *backButtonView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *titlePaddingView;
@property (nonatomic) BOOL shouldShowTitlePaddingView;
@property (retain, nonatomic) UIColor *titleLabelColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)wantsChromelessAppearance;
- (void).cxx_destruct;
- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (void)_setVisuallyHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_titlePaddingViewSizeForTitle;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showPaddingTitleView:(BOOL)a1;
- (void)sizeToFit;
- (void)setBackButtonTitle:(id)a0;

@end
