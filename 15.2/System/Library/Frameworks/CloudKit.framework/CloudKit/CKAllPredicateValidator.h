@class NSArray;

@interface CKAllPredicateValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSArray *validators;

- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)initWithValidators:(id)a0;

@end
