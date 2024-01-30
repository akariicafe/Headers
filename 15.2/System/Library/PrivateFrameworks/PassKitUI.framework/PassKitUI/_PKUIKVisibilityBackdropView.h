@protocol _PKUIKVisibilityBackdropViewDelegate;

@interface _PKUIKVisibilityBackdropView : _UIBackdropView {
    double _visibility;
    double _visibilityAnimationTarget;
    unsigned int _animationCounter;
    unsigned int _styleToken;
    BOOL _updatingBackdropSettings;
    long long _style;
}

@property (weak, nonatomic) id<_PKUIKVisibilityBackdropViewDelegate> delegate;

- (void)pkui_accessibilitySettingsDidChange:(id)a0;
- (void)_updateStyleIfNecessary;
- (void)pkui_setVisibility:(double)a0 animated:(BOOL)a1;
- (double)pkui_visibility;
- (void)_pkui_setVisibility:(double)a0 animated:(BOOL)a1;
- (void)pkui_updateBackdropSettings;
- (void)pkui_commitBackdropSettings;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 privateStyle:(long long)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)dealloc;
- (long long)pkui_preferredBackdropStyle;

@end
