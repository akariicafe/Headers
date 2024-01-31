@protocol CKObjectValidating;

@interface CKRecursivePredicateValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) id<CKObjectValidating> validator;

- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)initWithValidator:(id)a0;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;

@end
