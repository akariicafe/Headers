@class NSString;

@interface CKStringValueValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSString *value;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)initWithValue:(id)a0;

@end
