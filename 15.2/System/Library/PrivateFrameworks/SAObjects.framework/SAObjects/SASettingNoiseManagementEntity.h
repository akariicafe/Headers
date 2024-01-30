@class NSString;

@interface SASettingNoiseManagementEntity : SASettingEntity

@property (copy, nonatomic) NSString *previousValue;
@property (copy, nonatomic) NSString *value;

+ (id)noiseManagementEntity;
+ (id)noiseManagementEntityWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
