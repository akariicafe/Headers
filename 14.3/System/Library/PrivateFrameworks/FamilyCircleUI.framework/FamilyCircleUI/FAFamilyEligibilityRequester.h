@class AIDAAccountManager, NSOperationQueue, AAGrandSlamSigner;

@interface FAFamilyEligibilityRequester : NSObject {
    AAGrandSlamSigner *_grandSlamSigner;
    AIDAAccountManager *_accountManager;
    NSOperationQueue *_networkActivityQueue;
}

@property (nonatomic) BOOL allowsAuthenticationPrompt;

- (id)init;
- (void).cxx_destruct;
- (id)_grandSlamSigner;
- (id)initWithAccountManager:(id)a0;
- (id)_accountStore;
- (void)requestFamilyEligibilityWithCompletion:(id /* block */)a0;
- (id)_appleAccount;

@end
