@class NSNumber;

@interface SASettingBooleanEntity : SASettingEntity

@property (copy, nonatomic) NSNumber *previousValue;
@property (nonatomic) BOOL value;

+ (id)booleanEntity;
+ (id)booleanEntityWithDictionary:(id)a0 context:(id)a1;
+ (id)booleanEntityWithValue:(BOOL)a0;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithValue:(BOOL)a0;

@end
