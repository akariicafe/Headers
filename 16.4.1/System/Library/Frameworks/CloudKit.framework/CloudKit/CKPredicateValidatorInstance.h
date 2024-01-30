@class NSString;

@interface CKPredicateValidatorInstance : NSObject <CKObjectValidating>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)validate:(id)a0 error:(id *)a1;

@end
