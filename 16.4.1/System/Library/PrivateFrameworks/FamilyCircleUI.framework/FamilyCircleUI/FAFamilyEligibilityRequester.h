@class AIDAAccountManager, NSOperationQueue, AAGrandSlamSigner;

@interface FAFamilyEligibilityRequester : NSObject {
    AAGrandSlamSigner *_grandSlamSigner;
    AIDAAccountManager *_accountManager;
    NSOperationQueue *_networkActivityQueue;
}

@property (nonatomic) BOOL allowsAuthenticationPrompt;

- (id)_accountStore;
- (id)_grandSlamSigner;
- (id)initWithAccountManager:(id)a0;
- (id)init;
- (id)_appleAccount;
- (void).cxx_destruct;
- (void)requestFamilyEligibilityWithCompletion:(id /* block */)a0;

@end
