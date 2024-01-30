@class NSObject, MPStoreSocialRequestOperation, MPModelSocialPerson;
@protocol OS_dispatch_queue;

@interface _MPStoreSocialTransientState : NSObject {
    long long _followState;
    long long _followPendingRequestState;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    MPStoreSocialRequestOperation *_latestFollowOperation;
    MPStoreSocialRequestOperation *_latestFollowPendingRequestOperation;
}

@property (readonly, nonatomic) MPModelSocialPerson *person;
@property (readonly, nonatomic) long long followState;
@property (readonly, nonatomic) long long followPendingRequestState;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;
- (id)initWithPerson:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)newOperationForTransientFollowState:(long long)a0 completion:(id /* block */)a1;
- (void)_endIfNeeded;
- (id)newOperationForTransientFollowPendingRequestState:(long long)a0 completion:(id /* block */)a1;

@end
