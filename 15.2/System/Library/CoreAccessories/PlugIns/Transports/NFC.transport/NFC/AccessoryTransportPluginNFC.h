@class NSData, NSString, NSArray, NFAccessoryReaderSession, NSMutableDictionary, NSObject, NFACTag, NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object, OS_dispatch_semaphore;

@interface AccessoryTransportPluginNFC : ACCTransportPlugin <ACCTransportPluginProtocol> {
    NSMutableDictionary *_tagForConnectionUuid;
    NSMutableDictionary *_connectionUuidForEndpointUuid;
    struct timespec { long long tv_sec; long long tv_nsec; } _tagsArrivalTime;
    NFAccessoryReaderSession *_readerSession;
    NSArray *_polledTags;
    NSObject<OS_dispatch_semaphore> *_polledSem;
    NFACTag *_connectedTag;
    NSData *_connectedTagId;
    NSString *_connectedTagEndpointUuid;
    int _screenStateToken;
    int _screenState;
    int _proximityOcclusionState;
    struct timespec { long long tv_sec; long long tv_nsec; } _proxRequestTime;
    struct __IOHIDEventSystemClient { } *_hidEventClient;
    BOOL _waitProxState;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listenerConnection;
    NSMutableArray *_peers;
}

@property (nonatomic) BOOL isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (void)stopPlugin;
- (void)initPlugin;
- (void)readerSession:(id)a0 didDetectTags:(id)a1;
- (void)readerSessionDidEndUnexpectedly:(id)a0;
- (void)startPlugin;
- (BOOL)sendOutgoingData:(id)a0 forEndpointWithUUID:(id)a1 connectionUUID:(id)a2;
- (void).cxx_destruct;
- (void)propertiesDidChange:(id)a0 forEndpointWithUUID:(id)a1 previousProperties:(id)a2 connectionUUID:(id)a3;
- (BOOL)_initXPC;
- (void)_setScreenStateMonitoringEnabled:(BOOL)a0;
- (void)_setProximityMonitoringEnabled:(BOOL)a0;
- (BOOL)_tagsHavePowerBits:(unsigned char)a0 uuid:(id *)a1;
- (BOOL)_getpowerPauseStatus;
- (void)_requestPowerPause;
- (BOOL)_requiresMfi40Auth:(id)a0;
- (BOOL)_requiresLegacyAuth:(id)a0;
- (void)_handleSessionOpen:(BOOL)a0 forEndpointWithUUID:(id)a1 connectionUUID:(id)a2;
- (void)_closeReaderSession;
- (void)_notifyAuthReadyAfterPowerPauseComplete;
- (void)_connectPeer:(id)a0;
- (void)_handleNearFieldAccessoryEventNotification:(id)a0;
- (unsigned int)_getNfcStateMachineState;
- (unsigned char)_getAccessoryType:(id)a0;
- (BOOL)_checkProductTypeCompatibility:(unsigned char)a0;
- (void)_didNfcTagsListChange:(id)a0;
- (BOOL)_hasWalletOnClearCase2020:(id)a0;
- (void)_createEndpointsForTags:(id)a0 skipWalletAuth:(BOOL)a1;
- (void)_updateAccessoryPower:(BOOL)a0;
- (BOOL)_checkLRC:(id)a0;
- (id)_decodeTagIdentifier:(id)a0;
- (void)_didScreenStateChange:(BOOL)a0;
- (void)_pollTags:(unsigned int)a0;
- (BOOL)_connectToTagId:(id)a0;
- (void)_handleIOHIDEvent:(struct __IOHIDEvent { } *)a0;

@end
