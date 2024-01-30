@interface CKComparisonModifierValidator : CKPredicateValidatorInstance

@property (nonatomic) unsigned long long modifier;

- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)CKPropertiesDescription;
- (id)initWithModifier:(unsigned long long)a0;

@end
