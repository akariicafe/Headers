@class NSArray;

@interface CKAggregateExpressionValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSArray *subExpressionValidators;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)initWithValidators:(id)a0;
- (BOOL)validate:(id)a0 error:(id *)a1;

@end
