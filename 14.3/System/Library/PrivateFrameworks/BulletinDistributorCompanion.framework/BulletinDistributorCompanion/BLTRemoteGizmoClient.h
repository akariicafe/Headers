@class NSString, BLTBulletinSendQueuePassthrough, NSMutableDictionary, BLTGizmoLegacyMap;
@protocol BLTCompanionServer;

@interface BLTRemoteGizmoClient : BLTRemoteObject <BLTBulletinSendQueueDelegate, BLTGizmoClient> {
    BLTBulletinSendQueuePassthrough *_bulletinSendQueue;
    NSMutableDictionary *_gizmoToPhonePublisherBulletinIDMap;
}

@property (weak, nonatomic) id<BLTCompanionServer> server;
@property (retain, nonatomic) BLTGizmoLegacyMap *gizmoLegacyMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setLastKnownConnectionStatus:(unsigned long long)a0;
- (void)registerProtobufHandlers;
- (void)handleFileURL:(id)a0 extraMetadata:(id)a1;
- (void)_pingPairedDevice;
- (void)_handleSyncStateChanged:(id)a0;
- (void)handleAcknowledgeActionRequest:(id)a0;
- (void)handleSnoozeActionRequest:(id)a0;
- (void)handleDismissActionRequest:(id)a0;
- (void)handleSupplementaryActionRequest:(id)a0;
- (void)handleDidPlayLightsAndSirensReply:(id)a0;
- (void)handleRemoveBulletinRequest:(id)a0;
- (void)handleShouldSuppressLightsAndSirensNowRequest:(id)a0;
- (void)handleHandlePairedDeviceReady:(id)a0;
- (void)handleWillSendLightsAndSirensRequest:(id)a0;
- (void)addBulletin:(id)a0 playLightsAndSirens:(BOOL)a1 updateType:(unsigned long long)a2 withTimeout:(id)a3 completion:(id /* block */)a4;
- (void)cancelBulletinWithPublisherMatchID:(id)a0 universalSectionID:(id)a1 feed:(unsigned long long)a2 withTimeout:(id)a3;
- (void)removeBulletinWithPublisherBulletinID:(id)a0 recordID:(id)a1 sectionID:(id)a2 withTimeout:(id)a3;
- (void)_pingPairedDeviceWithRetry:(unsigned long long)a0;
- (void)removeBulletinWithPublisherBulletinID:(id)a0 recordID:(id)a1 sectionID:(id)a2;
- (void)addBulletin:(id)a0 playLightsAndSirens:(BOOL)a1 updateType:(unsigned long long)a2 transmissionDate:(id)a3 receptionDate:(id)a4;
- (void)cancelBulletinWithPublisherMatchID:(id)a0 universalSectionID:(id)a1 feed:(unsigned long long)a2 transmissionDate:(id)a3 receptionDate:(id)a4;
- (void)addBulletinSummary:(id)a0;
- (void)updateBulletinList:(id)a0;
- (void)addBulletin:(id)a0 playLightsAndSirens:(BOOL)a1;
- (void)queuePendingRequests;

@end
