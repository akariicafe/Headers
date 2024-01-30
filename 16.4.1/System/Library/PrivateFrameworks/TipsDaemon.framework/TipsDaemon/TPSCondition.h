@class NSString, NSArray;

@interface TPSCondition : TPSSerializableObject <TPSValidatable> {
    NSArray *_validations;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *values;
@property (copy, nonatomic) NSString *valueType;
@property (nonatomic) long long type;
@property (nonatomic) long long joinType;
@property (readonly, nonatomic) NSArray *targetingValidations;
@property (readonly, nonatomic) long long defaultJoinType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)conditionFromDictionary:(id)a0;
+ (long long)typeFromConditionDictionary:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)validateWithCompletion:(id /* block */)a0;
- (id)_valuesFromValuesArray:(id)a0;

@end
