@class NSMutableDictionary, NSXPCConnection, BBServer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BBObserverClientProxy : NSObject <BBObserverServerInterface, BBObserverClientInterface>

@property (weak, nonatomic) BBServer *server;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSMutableDictionary *bulletinIDsToTransaction;
@property (copy, nonatomic) NSString *clientBundleIdentifier;

+ (id)xpcInterface;

- (void)updateGlobalSettings:(id)a0;
- (void)updateSectionParameters:(id)a0 forSectionID:(id)a1;
- (void)removeSection:(id)a0;
- (void)getSectionInfoForActiveSectionsWithHandler:(id /* block */)a0;
- (void)getUniversalSectionIDForSectionID:(id)a0 withHandler:(id /* block */)a1;
- (id)initWithServer:(id)a0 connection:(id)a1 calloutQueue:(id)a2;
- (void)getBulletinsForPublisherMatchIDs:(id)a0 sectionID:(id)a1 withHandler:(id /* block */)a2;
- (void)getSectionParametersForSectionID:(id)a0 withHandler:(id /* block */)a1;
- (void)removeBulletins:(id)a0 inSection:(id)a1 fromFeeds:(unsigned long long)a2;
- (void)getSectionInfoWithHandler:(id /* block */)a0;
- (void)removeTransaction:(id)a0;
- (void)updateSectionInfo:(id)a0;
- (void)updateBulletin:(id)a0 withHandler:(id /* block */)a1;
- (void)getBulletinsWithHandler:(id /* block */)a0;
- (void)getSectionInfoForSectionIDs:(id)a0 withHandler:(id /* block */)a1;
- (void)clearBulletinsFromDate:(id)a0 toDate:(id)a1 inSections:(id)a2;
- (void)clearSection:(id)a0;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)a0 withHandler:(id /* block */)a1;
- (void)setObserverFeed:(unsigned long long)a0 asLightsAndSirensGateway:(id)a1 priority:(unsigned long long)a2;
- (void)getObserverDebugInfo:(id /* block */)a0;
- (void)noteServerReceivedResponseForBulletin:(id)a0;
- (void)noteBulletinsLoadedForSectionID:(id)a0;
- (void)requestNoticesBulletinsForSectionID:(id)a0;
- (id)description;
- (void)requestNoticesBulletinsForAllSections;
- (void)setObserverFeed:(unsigned long long)a0 attachToLightsAndSirensGateway:(id)a1;
- (id)transactionBulletinIDs;
- (unsigned long long)incrementedTransactionIDForBulletinID:(id)a0;
- (void).cxx_destruct;
- (void)handleResponse:(id)a0 withCompletion:(id /* block */)a1;
- (id)currentTransactionForBulletinID:(id)a0;
- (void)clearBulletinIDs:(id)a0 inSection:(id)a1;
- (void)finishedWithBulletinID:(id)a0 transactionID:(unsigned long long)a1;
- (void)dealloc;
- (id)initWithServer:(id)a0 connection:(id)a1 queue:(id)a2 calloutQueue:(id)a3;

@end
