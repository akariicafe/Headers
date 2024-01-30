@class NSMutableArray;

@interface PKPaymentProvisioningControllerCredentialQueue : NSObject {
    NSMutableArray *_credentials;
    NSMutableArray *_completedCredentials;
    unsigned long long _currentIndex;
}

- (unsigned long long)remaining;
- (id)credentials;
- (unsigned long long)count;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)completedCount;
- (id)completedCredentials;
- (id)nextCredentialToProvision;
- (void)removeCredential:(id)a0;
- (void)setCredentialsToProvision:(id)a0;
- (void)setCurrentCredential:(id)a0;

@end
