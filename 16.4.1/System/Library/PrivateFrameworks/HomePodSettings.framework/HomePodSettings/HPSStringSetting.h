@class NSString;

@interface HPSStringSetting : HPSSetting

@property (readonly, copy, nonatomic) NSString *stringValue;

+ (Class)valueClass;
+ (id)settingWithKeyPath:(id)a0 stringValue:(id)a1;

- (id)homeAdapterLegacySettingValue;
- (id)initWithKeyPath:(id)a0 stringValue:(id)a1;

@end
