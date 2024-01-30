@class NSArray;

@interface CKAggregateExpressionValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSArray *subExpressionValidators;

- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)initWithValidators:(id)a0;

@end
