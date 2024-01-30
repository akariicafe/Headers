@class ACAccountStore;

@interface AASignInOperationHelper : NSObject {
    ACAccountStore *_accountStore;
}

- (void)signInAccount:(id)a0 enablingDataclasses:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)_saveAccount:(id)a0 completion:(id /* block */)a1;
- (void)_refreshEnabledDataclassesForAccount:(id)a0;

@end
