@class NSArray, VSAccountStore, VSOptional;

@interface VSCredentialSaveOperation : VSAsyncOperation

@property (copy, nonatomic) NSArray *unsavedAccounts;
@property (retain, nonatomic) VSAccountStore *accountStore;
@property (retain, nonatomic) VSOptional *result;

- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (void)_didSaveAccounts:(id)a0 withResult:(BOOL)a1 error:(id)a2;
- (id)initWithUnsavedAccounts:(id)a0 accountStore:(id)a1;

@end
