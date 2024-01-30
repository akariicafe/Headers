@class WBSPasswordBreachContext, NSDictionary, NSMutableDictionary, NSObject, WBSPasswordBreachResults;
@protocol OS_dispatch_queue, WBSPasswordBreachCredentialSource;

@interface WBSPasswordBreachQueuedPasswordBagManager : NSObject {
    WBSPasswordBreachContext *_context;
    WBSPasswordBreachResults *_results;
    id<WBSPasswordBreachCredentialSource> _credentialSource;
    NSMutableDictionary *_queuedPasswordsByUUID;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, copy, nonatomic) NSDictionary *allNonbreachedPasswords;

- (void)getPasswordsForNextBatchWithCompletionHandler:(id /* block */)a0;
- (void)reportPasswordCheckBatchResults:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 results:(id)a1 passwordSource:(id)a2;
- (id)description;
- (id)_passwordBagFromDictionaryRepresentation:(id)a0;
- (id)_constructNewBagOnInternalQueue;
- (id)_unbreachedCredentials;
- (id)_dictionaryRepresentation;

@end
