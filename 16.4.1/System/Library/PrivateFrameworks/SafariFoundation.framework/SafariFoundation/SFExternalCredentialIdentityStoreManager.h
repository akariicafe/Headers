@class NSObject;
@protocol OS_dispatch_queue;

@interface SFExternalCredentialIdentityStoreManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_credentialIdentityStoreWithIdentifier:(id)a0;
- (void)getCredentialIdentityStoreWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeCredentialIdentityStoreWithIdentifier:(id)a0 completion:(id /* block */)a1;

@end
