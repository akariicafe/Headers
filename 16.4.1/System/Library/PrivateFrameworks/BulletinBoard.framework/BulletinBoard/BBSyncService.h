@class NSObject, NSString, NSMutableArray, IDSService;
@protocol OS_dispatch_queue, BBSyncServiceDelegate;

@interface BBSyncService : NSObject <IDSServiceDelegate> {
    IDSService *_service;
    NSMutableArray *_pendingDismissalDictionaries;
    NSMutableArray *_pendingDismissalIDs;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _queuedFeed;
    NSString *_queuedSectionID;
    NSString *_queuedUniversalSectionID;
}

@property (readonly, nonatomic) unsigned long long pairedDeviceCount;
@property (weak, nonatomic) id<BBSyncServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendSyncedRemovalForBulletin:(id)a0 feeds:(unsigned long long)a1;
- (void)_reallyEnqueueBulletin:(id)a0 feeds:(unsigned long long)a1;
- (unsigned long long)pairedDeviceCount;
- (BOOL)_hasDestination;
- (id)_syncAccount;
- (BOOL)_syncHasDefaultPairedDevice;
- (void)_sendSyncMessage:(id)a0;
- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (id)_syncLocalDevices;
- (void)enqueueSyncedRemovalForBulletin:(id)a0 feeds:(unsigned long long)a1;
- (id)dismissalSectionIdentifiersForIncomingMessage:(id)a0;
- (void)sendPendingSyncedRemovals;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3;
- (id)_dismissalDictionaryForBulletin:(id)a0;
- (id)initWithQueue:(id)a0;

@end
