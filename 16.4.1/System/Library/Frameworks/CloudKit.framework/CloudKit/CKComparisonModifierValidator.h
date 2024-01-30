@interface CKComparisonModifierValidator : CKPredicateValidatorInstance

@property (nonatomic) unsigned long long modifier;

- (id)initWithModifier:(unsigned long long)a0;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)CKPropertiesDescription;

@end
