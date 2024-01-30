@class UIVisualEffect, NSString, SFThemeColorBarTheme, UIVisualEffectView, UIView;

@interface SFThemeColorEffectView : UIView {
    UIView *_darkeningView;
    UIVisualEffectView *_effectView;
}

@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) UIVisualEffect *effect;
@property (copy, nonatomic, setter=_setGroupName:) NSString *_groupName;
@property (retain, nonatomic) SFThemeColorBarTheme *theme;
@property (nonatomic) double themeColorVisibility;

- (void).cxx_destruct;
- (id)initWithEffect:(id)a0;
- (void)_updateFillColor;
- (void)_applyTheme;
- (BOOL)_needsBlur;

@end
