@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BLTBulletinDistributorSubscriberList : NSObject <BLTBulletinDistributorSubscriberDelegate>

@property (retain, nonatomic) NSMutableArray *subscribers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pingWithRecordID:(id)a0 forSectionID:(id)a1;
- (id)init;
- (void)pingWithBulletin:(id)a0 ack:(id /* block */)a1;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)_removeSubscribersWithMachServiceName:(id)a0 exceptFor:(id)a1;
- (BOOL)hasSubscribersForSectionID:(id)a0;
- (id)subscribedSectionIDs;
- (void)subscriber:(id)a0 subscribedWithMachServiceName:(id)a1;

@end
