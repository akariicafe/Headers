@class NSString;

@interface CKStringValueValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSString *value;

- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;

@end
