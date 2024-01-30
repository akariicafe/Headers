@class NSString, NSMapTable, DNDSPairedDevice, NSMutableDictionary, NSObject, NSMutableSet;
@protocol DNDSSyncService, DNDSIDSSyncEngineMetadataStoring, DNDSKeybagStateProviding, OS_dispatch_queue, OS_dispatch_source;

@interface DNDSIDSSyncEngine : NSObject <DNDSSyncServiceDelegate, DNDSKeybagStateObserver, DNDSSysdiagnoseDataProvider, DNDSIDSSyncEngineSynchronizing> {
    NSMapTable *_sourcesByZone;
    id<DNDSSyncService> _syncService;
    DNDSPairedDevice *_pairedDevice;
    unsigned long long _syncState;
    id<DNDSIDSSyncEngineMetadataStoring> _metadataStore;
    id<DNDSKeybagStateProviding> _keybag;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSObject<OS_dispatch_source> *_inflightExpirationTimer;
    unsigned long long _retriesAvailable;
    unsigned long long _inflightExpirationTime;
    NSMutableDictionary *_inflightMetadataByRequestIdentifier;
    NSMutableDictionary *_inflightDateByRequestIdentifier;
    NSMutableSet *_inflightMetadata;
    unsigned long long _role;
    id /* block */ _didReceiveUnlockMessage;
    id /* block */ _didFireMetadataExpirationTimer;
}

@property (readonly, nonatomic) unsigned long long pairSyncState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;

- (void)sync;
- (void)validate;
- (void)setDataSource:(id)a0 forZone:(id)a1;
- (void)_queue_handleReplaceMessage:(id)a0 fromPairedDeviceIdentifier:(id)a1;
- (void)_queue_handleAckMessage:(id)a0 fromPairedDeviceIdentifier:(id)a1;
- (void)_queue_handleResyncMessage:(id)a0 fromPairedDeviceIdentifier:(id)a1;
- (void)_queue_removeAllInflightMetadata;
- (void)_queue_syncDataSourcesToDeviceWithIdentifier:(id)a0;
- (void)_queue_restartInflightExpirationTimer;
- (BOOL)syncService:(id)a0 shouldAcceptIncomingMessage:(id)a1 withVersionNumber:(unsigned long long)a2 messageType:(id)a3 fromDeviceIdentifier:(id)a4;
- (BOOL)_queue_cancelInflightExpirationTimer;
- (void)_queue_startInflightExpirationTimer;
- (void)_queue_sendModifiedRecordIDs:(id)a0 deletedRecordIDs:(id)a1 toDeviceWithIdentifier:(id)a2;
- (void)setDidReceiveUnlockMessage:(id /* block */)a0;
- (void)_queue_resetRetryTimer;
- (id)_queue_dataSourceForZone:(id)a0;
- (void)_queue_sendUnlockMessageToDeviceWithIdentifier:(id)a0;
- (void)setDidFireMetadataExpirationTimer:(id /* block */)a0;
- (void)syncService:(id)a0 didSendWithRequestIdentifier:(id)a1 withSuccess:(BOOL)a2 error:(id)a3;
- (id)initWithMetadataStore:(id)a0 syncService:(id)a1 keybag:(id)a2 role:(unsigned long long)a3 syncState:(unsigned long long)a4 inflightExpirationTime:(unsigned long long)a5;
- (void)_queue_validate;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (void)_queue_handleUpdateMessage:(id)a0 fromPairedDeviceIdentifier:(id)a1;
- (void)_queue_handleMessage:(id)a0 fromPairedDeviceIdentifier:(id)a1;
- (void)_queue_handleUnlockMessage:(id)a0 fromPairedDeviceIdentifier:(id)a1;
- (id)inflightMetadata;
- (double)_queue_earliestExpirationTimeSinceNowForInflightMetadata;
- (void)_queue_sendAckWithMetadata:(id)a0 forAction:(id)a1 toDeviceWithIdentifier:(id)a2;
- (BOOL)_queue_cancelRetryTimer;
- (void)setPairedDevice:(id)a0 syncEnabled:(BOOL)a1;
- (void)syncService:(id)a0 didReceiveMessage:(id)a1 withVersionNumber:(unsigned long long)a2 messageType:(id)a3 fromDeviceIdentifier:(id)a4;
- (void)keybagDidUnlockForTheFirstTime:(id)a0;
- (void)_queue_removeAllInflightMetadataWithExpirationDate:(id)a0;
- (id)initWithMetadataStore:(id)a0 syncService:(id)a1 keybag:(id)a2;
- (void).cxx_destruct;
- (void)_queue_startRetryTimer;
- (void)addRecordIDsToSave:(id)a0 recordIDsToDelete:(id)a1;
- (void)_queue_sendResyncMessageToDeviceWithIdentifier:(id)a0;

@end
