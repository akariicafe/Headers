@class BLTBulletinDistributorSubscriber, NSString;

@interface BLTLocalPingSubscriberService : NSObject <BLTPingService>

@property (retain, nonatomic) BLTBulletinDistributorSubscriber *subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unsubscribeFromSectionID:(id)a0;
- (void)subscribeWithMachServiceName:(id)a0;
- (void)sendBulletinSummary:(id)a0;
- (void)getWillNanoPresentNotificationForSectionID:(id)a0 subsectionIDs:(id)a1 completion:(id /* block */)a2;
- (void)subscribeToSectionID:(id)a0 forFullBulletins:(BOOL)a1 withAck:(BOOL)a2 ackAllowedOnLocalConnection:(BOOL)a3;
- (void).cxx_destruct;

@end
