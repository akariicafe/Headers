@class NSString, HMSettingValue;

@interface HMDSettingAttachedSettingUpdate : HMFObject

@property (readonly) NSString *keyPath;
@property (readonly) HMSettingValue *settingValue;

- (void).cxx_destruct;
- (id)initWithKeyPath:(id)a0 settingValue:(id)a1;

@end
