@protocol CKObjectValidating;

@interface CKDeclarativePredicateValidator : CKPredicateValidator {
    id<CKObjectValidating> _validator;
}

- (BOOL)validate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
