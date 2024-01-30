@interface CKComparisonOperatorValidator : CKPredicateValidatorInstance

@property (nonatomic) unsigned long long operatorType;

- (id)initWithOperatorType:(unsigned long long)a0;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)CKPropertiesDescription;

@end
