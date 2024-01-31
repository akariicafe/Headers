@protocol CKObjectValidating;

@interface CKDeclarativePredicateValidator : CKPredicateValidator {
    id<CKObjectValidating> _validator;
}

- (id)init;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
