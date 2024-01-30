@class NSString;

@interface OKWidgetMapViewAnnotation : MKPointAnnotation <OKSettingsSupport>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *actionScript;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (id)initWithSettings:(id)a0;
- (id)init;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;

@end
