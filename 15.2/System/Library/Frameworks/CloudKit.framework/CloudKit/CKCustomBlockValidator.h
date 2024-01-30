@interface CKCustomBlockValidator : CKPredicateValidatorInstance

@property (copy, nonatomic) id /* block */ block;

- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
