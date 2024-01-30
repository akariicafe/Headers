@protocol CKObjectValidating;

@interface CKCompoundSubpredicateValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) id<CKObjectValidating> validator;

- (BOOL)validate:(id)a0 error:(id *)a1;
- (id)CKPropertiesDescription;
- (id)initWithValidator:(id)a0;
- (void).cxx_destruct;

@end
