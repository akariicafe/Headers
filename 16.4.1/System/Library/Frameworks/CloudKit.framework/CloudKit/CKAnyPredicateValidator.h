@class NSArray;

@interface CKAnyPredicateValidator : CKPredicateValidatorInstance {
    NSArray *_validators;
}

- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;

@end
