@interface HPSBooleanSetting : HPSSetting

@property (readonly, nonatomic) BOOL booleanValue;

+ (Class)valueClass;
+ (id)settingWithKeyPath:(id)a0 booleanValue:(BOOL)a1;

- (id)description;
- (id)homeAdapterLegacySettingValue;
- (id)initWithKeyPath:(id)a0 booleanValue:(BOOL)a1;

@end
