@class NSNumber;

@interface SASettingFloatEntity : SASettingNumericEntity

@property (copy, nonatomic) NSNumber *previousValue;
@property (nonatomic) float value;

+ (id)floatEntity;
+ (id)floatEntityWithDictionary:(id)a0 context:(id)a1;
+ (id)floatEntityWithValue:(float)a0;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithValue:(float)a0;

@end
