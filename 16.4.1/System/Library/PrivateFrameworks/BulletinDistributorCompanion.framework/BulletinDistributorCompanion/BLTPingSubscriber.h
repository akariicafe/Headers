@class NSString, NSMutableDictionary;
@protocol BLTPingService;

@interface BLTPingSubscriber : NSObject <BLTPingSubscribing> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *pingHandlers;
@property (retain, nonatomic) id<BLTPingService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithService:(id)a0;
- (id)sectionIDs;
- (void)pingSubscriberDidLoad;
- (void)sendBulletinSummary:(id)a0 forBulletin:(id)a1 destinations:(unsigned long long)a2;
- (void)pingWithBulletin:(id)a0;
- (void)unsubscribeFromSectionID:(id)a0;
- (id)subscriptionInfos;
- (void)pingWithRecordID:(id)a0 forSectionID:(id)a1;
- (id)sectionIDsForBulletins;
- (void)subscribeToSectionID:(id)a0 withNotificationAckForwardHandler:(id /* block */)a1;
- (void)subscribeToSectionID:(id)a0 withBulletinAckHandler:(id /* block */)a1;
- (void)subscribeToSectionID:(id)a0 withPingAckHandler:(id /* block */)a1;
- (void)getWillNanoPresentNotificationForSectionID:(id)a0 completion:(id /* block */)a1;
- (void)subscribeToSectionID:(id)a0 withPingAckForwardHandler:(id /* block */)a1;
- (void)subscribeToSectionID:(id)a0 withPingHandler:(id /* block */)a1;
- (void)dealloc;
- (void)subscribeToSectionID:(id)a0 withNotificationAckForwardForAnyConnectionHandler:(id /* block */)a1;
- (void)subscribeToSectionID:(id)a0 withBulletinAckForwardForAnyConnectionHandler:(id /* block */)a1;
- (id)init;
- (void)subscribeWithMachServiceName:(id)a0;
- (void)subscribeToSectionID:(id)a0 withBulletinHandler:(id /* block */)a1;
- (void)subscribeToSectionID:(id)a0 withBulletinAckForwardHandler:(id /* block */)a1;
- (void)pingWithRecordID:(id)a0 forSectionID:(id)a1 ack:(id /* block */)a2;
- (void)subscribeToSectionID:(id)a0 withNotificationHandler:(id /* block */)a1;
- (void)_subscribeToSectionID:(id)a0 pingHandler:(id)a1 ackType:(unsigned long long)a2 forFullBulletins:(BOOL)a3;
- (void)subscribeToSectionID:(id)a0 withNotificationAckHandler:(id /* block */)a1;
- (void)_subscribeToSectionID:(id)a0 pingHandler:(id)a1 ackType:(unsigned long long)a2 forFullBulletins:(BOOL)a3 forNotifications:(BOOL)a4;
- (void)pingWithBulletin:(id)a0 ack:(id /* block */)a1;
- (void).cxx_destruct;
- (void)getWillNanoPresentNotificationForSectionID:(id)a0 subsectionIDs:(id)a1 completion:(id /* block */)a2;

@end
