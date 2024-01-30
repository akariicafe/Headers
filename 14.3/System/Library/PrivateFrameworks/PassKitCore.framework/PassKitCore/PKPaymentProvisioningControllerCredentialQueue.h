@class NSMutableArray;

@interface PKPaymentProvisioningControllerCredentialQueue : NSObject {
    NSMutableArray *_credentials;
    NSMutableArray *_completedCredentials;
    unsigned long long _currentIndex;
}

- (unsigned long long)remaining;
- (id)init;
- (void).cxx_destruct;
- (id)credentials;
- (void)setCredentialsToProvision:(id)a0;
- (void)removeCredential:(id)a0;
- (id)nextCredentialToProvision;
- (void)setCurrentCredential:(id)a0;
- (unsigned long long)completedCount;
- (id)completedCredentials;
- (unsigned long long)count;

@end
