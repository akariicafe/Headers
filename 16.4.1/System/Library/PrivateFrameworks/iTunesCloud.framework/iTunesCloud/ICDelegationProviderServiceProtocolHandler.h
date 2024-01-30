@class ICRequestContext, NSOperationQueue, ICUserIdentityStore, NSObject;
@protocol OS_dispatch_queue;

@interface ICDelegationProviderServiceProtocolHandler : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    ICUserIdentityStore *_identityStore;
    NSOperationQueue *_operationQueue;
    unsigned long long _nextSessionUniqueID;
    ICRequestContext *_requestContext;
}

- (void).cxx_destruct;
- (void)_getPlayInfoRequestWithStartDelegationResponse:(id)a0 streamContexts:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)_nextSessionUniqueID;
- (void)getFinishDelegationRequestsWithStartDelegationResponse:(id)a0 streamContexts:(id)a1 replyHandler:(id /* block */)a2;
- (void)getStartDelegationRequestForAccountIDs:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithUserIdentityStore:(id)a0 requestContext:(id)a1;

@end
