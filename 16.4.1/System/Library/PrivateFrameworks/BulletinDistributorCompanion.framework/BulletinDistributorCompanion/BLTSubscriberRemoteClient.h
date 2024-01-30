@class NSString, NSXPCConnection;

@interface BLTSubscriberRemoteClient : NSObject <BLTPingSubscribing>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sectionIDs;
- (void)pingSubscriberDidLoad;
- (void)pingWithBulletin:(id)a0;
- (id)subscriptionInfos;
- (void)pingWithRecordID:(id)a0 forSectionID:(id)a1;
- (id)sectionIDsForBulletins;
- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (id)init;
- (void)pingWithRecordID:(id)a0 forSectionID:(id)a1 ack:(id /* block */)a2;
- (void)pingWithBulletin:(id)a0 ack:(id /* block */)a1;
- (void).cxx_destruct;

@end
