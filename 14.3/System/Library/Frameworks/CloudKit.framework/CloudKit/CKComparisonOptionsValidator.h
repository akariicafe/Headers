@interface CKComparisonOptionsValidator : CKPredicateValidatorInstance

@property (nonatomic) unsigned long long options;

- (id)initWithOptions:(unsigned long long)a0;
- (id)CKPropertiesDescription;
- (BOOL)validate:(id)a0 error:(id *)a1;

@end
