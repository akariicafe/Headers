@class HMDBackingStoreCacheGroup, CKRecordZoneSubscription;

@interface HMDBackingStoreCacheUpdateGroupSubscriptionOperation : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreCacheGroup *record;
@property (retain, nonatomic) CKRecordZoneSubscription *subscription;

- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 subscription:(id)a1 resultBlock:(id /* block */)a2;
- (id)mainReturningError;

@end
