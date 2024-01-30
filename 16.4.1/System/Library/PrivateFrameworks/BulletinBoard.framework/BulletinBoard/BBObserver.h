@class NSString, NSMutableDictionary, NSMapTable, NSObject, BBObserverServerProxy;
@protocol BBObserverDelegate, OS_dispatch_queue;

@interface BBObserver : NSObject <BBAssertionDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_sectionParametersBySectionID;
    NSMapTable *_bulletinLifeAssertions;
    NSMutableDictionary *_remainingFeedsByBulletinID;
    BBObserverServerProxy *_serverProxy;
    BOOL _isGateway;
}

@property (weak, nonatomic) id<BBObserverDelegate> delegate;
@property (nonatomic) unsigned long long observerFeed;
@property (readonly, copy, nonatomic) NSString *gatewayName;
@property (readonly, nonatomic) unsigned long long gatewayPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)gatewayWithQueue:(id)a0 calloutQueue:(id)a1 name:(id)a2 priority:(unsigned long long)a3;
+ (id)observerWithQueue:(id)a0 calloutQueue:(id)a1 forGatewayName:(id)a2;

- (void)sendResponse:(id)a0;
- (void)requestNoticesBulletinsForSectionID:(id)a0;
- (void)updateGlobalSettings:(id)a0;
- (void)clearSection:(id)a0;
- (void)requestNoticesBulletinsForAllSections;
- (void)removeBulletins:(id)a0 inSection:(id)a1 fromFeed:(unsigned long long)a2;
- (void)sendResponse:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithQueue:(id)a0 forGateway:(id)a1;
- (void)getBulletinsWithCompletion:(id /* block */)a0;
- (void)_queue_updateRemoveBulletin:(id)a0 withReply:(id /* block */)a1;
- (void)_queue_updateBulletin:(id)a0 withReply:(id /* block */)a1;
- (void)_queue_invalidate;
- (void)getSectionInfoWithCompletion:(id /* block */)a0;
- (id)parametersForSectionID:(id)a0;
- (void)_queue_registerBulletin:(id)a0 withTransactionID:(unsigned long long)a1;
- (void)noteBulletinsLoadedForSectionID:(id)a0;
- (id)initWithQueue:(id)a0 calloutQueue:(id)a1 gatewayName:(id)a2 gatewayPriority:(unsigned long long)a3 isGateway:(BOOL)a4 connection:(id)a5;
- (void)updateSectionParameters:(id)a0 forSectionID:(id)a1;
- (void)getBulletinsForPublisherMatchIDs:(id)a0 sectionID:(id)a1 withCompletion:(id /* block */)a2;
- (void)clearBulletinsFromDate:(id)a0 toDate:(id)a1 inSections:(id)a2;
- (BOOL)isValid;
- (void)_queue_noteBulletinsLoadedForSectionID:(id)a0;
- (void)removeSection:(id)a0;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)a0 withCompletion:(id /* block */)a1;
- (void)getComposedImageSizeForAttachment:(id)a0 bulletin:(id)a1 withCompletion:(id /* block */)a2;
- (void)removeBulletins:(id)a0 inSection:(id)a1;
- (void)clearBulletins:(id)a0 inSection:(id)a1;
- (void)getSectionInfoForActiveSectionsWithCompletion:(id /* block */)a0;
- (void)getUniversalSectionIDForSectionID:(id)a0 withCompletion:(id /* block */)a1;
- (void)_queue_updateModifyBulletin:(id)a0 withReply:(id /* block */)a1;
- (void)noteServerReceivedResponseForBulletin:(id)a0;
- (void)dealloc;
- (id)_initWithQueue:(id)a0 calloutQueue:(id)a1 gatewayName:(id)a2 gatewayPriority:(unsigned long long)a3 isGateway:(BOOL)a4;
- (void)requestListBulletinsForSectionID:(id)a0;
- (void)serverProxy:(id)a0 connectionStateDidChange:(BOOL)a1;
- (id)init;
- (void)updateBulletin:(id)a0 withReply:(id /* block */)a1;
- (void)getParametersForSectionID:(id)a0 withCompletion:(id /* block */)a1;
- (void)invalidate;
- (void)assertionExpired:(id)a0 transactionID:(unsigned long long)a1;
- (void)_queue_updateAddBulletin:(id)a0 withReply:(id /* block */)a1;
- (void)_queue_serverProxy:(id)a0 connectionStateDidChange:(BOOL)a1;
- (void)updateSectionInfo:(id)a0;
- (id)initWithQueue:(id)a0 calloutQueue:(id)a1;
- (void)getSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 asGateway:(id)a1 priority:(unsigned long long)a2;
- (id)initWithQueue:(id)a0;

@end
