@interface CKComparisonOperatorValidator : CKPredicateValidatorInstance

@property (nonatomic) unsigned long long operatorType;

- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)CKPropertiesDescription;
- (id)initWithOperatorType:(unsigned long long)a0;

@end
