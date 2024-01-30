@class NSString;

@interface SASettingAppearanceEntity : SASettingEntity

@property (copy, nonatomic) NSString *previousValue;
@property (copy, nonatomic) NSString *value;

+ (id)appearanceEntityWithDictionary:(id)a0 context:(id)a1;
+ (id)appearanceEntity;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
