@class EMFEmojiToken, NSArray, UIView, ShapeView;

@interface TUIEmojiVariantSelectorView : UIControl

@property (retain, nonatomic) UIView *deepShadowView;
@property (retain, nonatomic) UIView *keyShadowView;
@property (retain, nonatomic) UIView *backdropView;
@property (retain, nonatomic) ShapeView *backgroundMaskView;
@property (retain, nonatomic) ShapeView *borderView;
@property (retain, nonatomic) UIView *separatorView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originRect;
@property (retain, nonatomic) EMFEmojiToken *baseEmojiToken;
@property (retain, nonatomic) NSArray *arrangedVariantCells;
@property (readonly, nonatomic) UIView *variantCellContainerView;
@property (readonly, nonatomic) EMFEmojiToken *selectedVariant;
@property (readonly, nonatomic) NSArray *allVariants;

+ (id)emojiTextAttributes;

- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 emojiToken:(id)a1 originRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGSize { double x0; double x1; })_emojiCellSize;
- (unsigned long long)_numberOfVariants;
- (id)_backgroundBezierPathForContainerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 originRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_unhighlightAllViews;
- (id)_variantCellAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_highlightCellAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
