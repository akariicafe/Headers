@class NSObject;
@protocol OS_dispatch_queue;

@interface AuthenticationProvider : NSObject <FMClient.AuthenticationProviding>

@property (nonatomic) unsigned long long autoRenewalLimit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

- (id)init;
- (void).cxx_destruct;
- (void)credentialWithCompletion:(id /* block */)a0;
- (void)retryRenewCredentialsIfPossibleWithError:(id)a0 completion:(id /* block */)a1;
- (BOOL)canAutoRenewCredentials;
- (void)renewCredentialsWithForce:(BOOL)a0 completion:(id /* block */)a1;
- (void)isManagedAccountWithCompletion:(id /* block */)a0;
- (void)credentialDidFail:(id)a0 error:(id)a1 completion:(id /* block */)a2;

@end
