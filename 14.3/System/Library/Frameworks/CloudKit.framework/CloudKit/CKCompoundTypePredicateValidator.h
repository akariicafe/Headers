@interface CKCompoundTypePredicateValidator : CKPredicateValidatorInstance

@property (nonatomic) unsigned long long type;

- (id)CKPropertiesDescription;
- (id)initWithType:(unsigned long long)a0;
- (BOOL)validate:(id)a0 error:(id *)a1;

@end
