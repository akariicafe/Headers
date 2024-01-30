@class AIDAAccountManager, NSOperationQueue, AAGrandSlamSigner;

@interface FAFamilyEligibilityRequester : NSObject {
    AAGrandSlamSigner *_grandSlamSigner;
    AIDAAccountManager *_accountManager;
    NSOperationQueue *_networkActivityQueue;
}

@property (nonatomic) BOOL allowsAuthenticationPrompt;

- (id)initWithAccountManager:(id)a0;
- (id)_appleAccount;
- (void)requestFamilyEligibilityWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_grandSlamSigner;
- (id)init;
- (id)_accountStore;

@end
