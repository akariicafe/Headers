@class NSNumber;

@interface MOBoolSettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) long long combineOperator;
@property (readonly, nonatomic) NSNumber *defaultValue;

- (id)valueFromPersistableValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)persistableValueFromValue:(id)a0;
- (BOOL)_combine:(BOOL)a0 with:(BOOL)a1;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithDefaultBool:(BOOL)a0 combineOperator:(long long)a1 isPublic:(BOOL)a2;

@end
