@class UIColor, _UIBackdropViewSettings;

@interface SBLockOverlayStyleProperties : NSObject {
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    _UIBackdropViewSettings *_settings;
}

@property (readonly, nonatomic) double tintAlpha;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) double blurRadius;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) long long graphicsQuality;

- (void)_configure;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)a0 quality:(long long)a1;
- (id)_stringForStyle;
- (id)_stringForQuality;
- (id)_settingsForStyle;

@end
