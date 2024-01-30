@protocol CKObjectValidating;

@interface CKDeclarativePredicateValidator : CKPredicateValidator {
    id<CKObjectValidating> _validator;
}

- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;

@end
