@interface CKCustomBlockValidator : CKPredicateValidatorInstance

@property (copy, nonatomic) id /* block */ block;

- (id)initWithBlock:(id /* block */)a0;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
