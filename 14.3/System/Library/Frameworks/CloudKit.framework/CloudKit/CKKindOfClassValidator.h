@interface CKKindOfClassValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) Class parentClass;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)initWithClass:(Class)a0;

@end
