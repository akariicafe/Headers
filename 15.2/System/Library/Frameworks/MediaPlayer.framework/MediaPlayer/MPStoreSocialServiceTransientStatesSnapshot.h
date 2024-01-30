@class NSMutableDictionary;

@interface MPStoreSocialServiceTransientStatesSnapshot : NSObject {
    NSMutableDictionary *_transientFollowStatesPerProfileID;
    NSMutableDictionary *_transientFollowPendingRequestStatesPerProfileID;
}

- (long long)transientFollowStateForPerson:(id)a0;
- (long long)transientFollowPendingRequestStateForPerson:(id)a0;
- (void)_addTransientFollowState:(long long)a0 transientFollowPendingRequestState:(long long)a1 forPerson:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
