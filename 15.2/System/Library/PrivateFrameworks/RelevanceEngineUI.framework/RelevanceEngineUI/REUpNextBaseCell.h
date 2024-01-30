@class UIView, NSString, REContent, UIImage, CALayer, UIImageView, UILongPressGestureRecognizer, UIColor;
@protocol REUpNextCellDelegate;

@interface REUpNextBaseCell : UICollectionViewCell <UIGestureRecognizerDelegate> {
    struct CGSize { double width; double height; } _shadowSize;
    UIImageView *_shadowView;
    UIView *_overlayView;
    UILongPressGestureRecognizer *_longPressRecognizer;
    double _darkeningAmount;
    double _contentBrightness;
    unsigned long long _behavior;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _overlayInsets;
}

@property (readonly, nonatomic) UIImage *contentImage;
@property (weak, nonatomic) id<REUpNextCellDelegate> delegate;
@property (retain, nonatomic) UIImage *overrideContentImage;
@property (readonly, nonatomic) REContent *content;
@property (retain, nonatomic) NSString *representedElementIdentifier;
@property (readonly, nonatomic) UIColor *defaultTextColor;
@property (readonly, nonatomic) BOOL shouldOverrideContentHeaderColor;
@property (readonly, nonatomic) CALayer *imageLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_shadowImage;

- (void)layoutSubviews;
- (id)transitionContext;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)a0;
- (void)setHighlightInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)didLongPress:(id)a0;
- (void)setContentImage:(id)a0 animated:(BOOL)a1;
- (void)configureWithContent:(id)a0;
- (void)setContentBrightness:(double)a0 animated:(BOOL)a1;
- (void)_updateColorOverlay;
- (void)defaultTextColorDidChange;
- (id)primaryEffectViews;
- (id)secondaryEffectViews;
- (void)setHighlightBehavior:(unsigned long long)a0;
- (void)setShadowViewHidden:(BOOL)a0;
- (void)setForegroundTextColorToColor:(id)a0 shouldOverrideContentHeaderColor:(BOOL)a1;

@end
