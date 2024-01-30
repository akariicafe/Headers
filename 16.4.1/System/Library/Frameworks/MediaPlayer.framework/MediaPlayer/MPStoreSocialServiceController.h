@class NSOperationQueue, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MPStoreSocialServiceController : NSObject {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_transientStates;
}

+ (id)_internalErrorForHTTPResponseCode:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)requestFollowPerson:(id)a0 completion:(id /* block */)a1;
- (void)_performTransientFollowPendingRequestState:(long long)a0 onPerson:(id)a1 completion:(id /* block */)a2;
- (void)_queue_transientStatesDidChange;
- (void)_handleTransientStateForPersonDidChangeNotification:(id)a0;
- (id)_newOperationForRemovingFollower:(id)a0 completion:(id /* block */)a1;
- (void)_notifyTransientStatesDidChangeWithSnapshot:(id)a0;
- (void)_performTransientFollowState:(long long)a0 onPerson:(id)a1 completion:(id /* block */)a2;
- (void)_populateTransientStatesSnapshot:(id)a0;
- (id)_transientStateForPerson:(id)a0 shouldCreate:(BOOL)a1;
- (void)_transientStatesDidChange;
- (void)acceptAllFollowRequestsWithCompletion:(id /* block */)a0;
- (void)acceptFollowRequestFromPerson:(id)a0 completion:(id /* block */)a1;
- (void)blockPerson:(id)a0 completion:(id /* block */)a1;
- (void)cancelFollowRequestOnPerson:(id)a0 completion:(id /* block */)a1;
- (void)declineFollowRequestFromPerson:(id)a0 completion:(id /* block */)a1;
- (void)followPerson:(id)a0 completion:(id /* block */)a1;
- (void)removeFollower:(id)a0 completion:(id /* block */)a1;
- (long long)transientFollowPendingRequestStateForPerson:(id)a0;
- (long long)transientFollowStateForPerson:(id)a0;
- (void)unblockPerson:(id)a0 completion:(id /* block */)a1;
- (void)unfollowPerson:(id)a0 completion:(id /* block */)a1;

@end
