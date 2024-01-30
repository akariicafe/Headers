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

- (void)saveBagToStore;
- (id)_dictionaryRepresentation;
- (id)_constructBagOnInternalQueueWithCredentials:(id)a0 ensureFakePasswordGeneration:(BOOL)a1;
- (id)_unbreachedCredentials;
- (void)getPasswordsForNextBatchWithCompletionHandler:(id /* block */)a0;
- (id)_passwordBagFromDictionaryRepresentation:(id)a0;
- (id)initWithContext:(id)a0 results:(id)a1 passwordSource:(id)a2;
- (void)reportPasswordCheckBatchResults:(id)a0;
- (id)_constructNewBagOnInternalQueueEnsuringFakePasswordGeneration:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;

@end
