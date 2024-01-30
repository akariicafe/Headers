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

- (BOOL)_needsBlur;
- (void)_applyTheme;
- (id)initWithEffect:(id)a0;
- (void)_updateFillColor;
- (void).cxx_destruct;

@end
