@class NSString, NSMutableArray;

@interface OKWidgetMediaAnimationView : OKWidgetView <OKSettingsSupport> {
    NSMutableArray *_CGImages;
    BOOL _autoplay;
    BOOL _loop;
    double _duration;
    NSString *_uuid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;
+ (id)animationKeyPrefix;
+ (void)setupJavascriptContext:(id)a0;

- (BOOL)prepareForDisplay:(BOOL)a0;
- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithWidget:(id)a0;
- (void)stopAnimation;
- (id)settingObjectForKey:(id)a0;
- (void)playAnimation;
- (long long)settingContentMode;
- (void)setSettingContentMode:(long long)a0;
- (void)setSettingUrls:(id)a0;
- (BOOL)settingAutoplay;
- (void)setSettingAutoplay:(BOOL)a0;
- (BOOL)settingLoop;
- (void)setSettingLoop:(BOOL)a0;
- (double)settingDuration;
- (void)setSettingDuration:(double)a0;

@end
