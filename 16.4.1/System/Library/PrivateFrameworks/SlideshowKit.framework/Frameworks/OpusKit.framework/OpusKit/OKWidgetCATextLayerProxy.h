@class NSString;

@interface OKWidgetCATextLayerProxy : OKWidgetCALayerProxy <OKSettingsSupport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (id)init;
- (void)setSettingString:(id)a0;
- (id)settingString;

@end
