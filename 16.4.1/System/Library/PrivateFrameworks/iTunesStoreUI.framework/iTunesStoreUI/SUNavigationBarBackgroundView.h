@class UIColor, _UIBackdropView, UIView, _UINavigationBarAppearanceStorage;

@interface SUNavigationBarBackgroundView : UIView {
    UIView *_borderView;
}

@property (readonly) _UIBackdropView *backdropView;
@property (nonatomic) long long backdropStyle;
@property (nonatomic) BOOL separatorOnTop;
@property (nonatomic) long long barStyle;
@property (retain, nonatomic) UIColor *barTintColor;
@property (retain, nonatomic) _UINavigationBarAppearanceStorage *appearanceStorage;
@property (retain, nonatomic, setter=_setShadowView:) UIView *_shadowView;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (nonatomic) BOOL barWantsAdaptiveBackdrop;

- (id)_currentCustomBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forceUpdateBackgroundImage:(BOOL)a1;
- (void)_setIsContainedInPopover:(BOOL)a0;
- (void)updateBackgroundImage;
- (id)_currentCustomBackgroundRespectOversize_legacy:(BOOL *)a0;

@end
