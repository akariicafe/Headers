@class WBSPasswordBreachContext, NSDictionary, NSMutableDictionary, NSObject, WBSPasswordBreachResults;
@protocol OS_dispatch_queue, WBSPasswordBreachCredentialSource;

@interface WBSPasswordBreachQueuedPasswordBagManager : NSObject {
    WBSPasswordBreachContext *_context;
    WBSPasswordBreachResults *_results;
    id<WBSPasswordBreachCredentialSource> _credentialSource;
    NSMutableDictionary *_queuedPasswordsByUUID;
    long long _fillState;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, copy, nonatomic) NSDictionary *allNonbreachedPasswords;
@property (readonly, nonatomic) long long fillState;

- (id)_dictionaryRepresentation;
- (void)getPasswordsForNextBatchWithCompletionHandler:(id /* block */)a0;
- (id)_passwordBagFromDictionaryRepresentation:(id)a0;
- (void)saveBagToStore;
- (id)description;
- (id)_constructNewBagOnInternalQueueEnsuringFakePasswordGeneration:(BOOL)a0;
- (void).cxx_destruct;
- (id)_unbreachedCredentials;
- (id)initWithContext:(id)a0 results:(id)a1 passwordSource:(id)a2;
- (id)_constructBagOnInternalQueueWithCredentials:(id)a0 ensureFakePasswordGeneration:(BOOL)a1;
- (void)reportPasswordCheckBatchResults:(id)a0;

@end
