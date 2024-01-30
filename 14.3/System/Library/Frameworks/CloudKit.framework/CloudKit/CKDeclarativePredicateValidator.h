@protocol CKObjectValidating;

@interface CKDeclarativePredicateValidator : CKPredicateValidator {
    id<CKObjectValidating> _validator;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)validate:(id)a0 error:(id *)a1;

@end
