@class NSString, NSArray;

@interface CKFunctionExpressionValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSArray *argumentValidators;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)initWithFunctionName:(id)a0 validators:(id)a1;
- (BOOL)validate:(id)a0 error:(id *)a1;

@end
