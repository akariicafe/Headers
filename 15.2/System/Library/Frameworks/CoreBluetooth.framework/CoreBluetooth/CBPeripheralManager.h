@class NSNumber, NSMutableDictionary, NSMapTable, NSHashTable, NSMutableArray, NSLock;
@protocol CBPeripheralManagerDelegate;

@interface CBPeripheralManager : CBManager {
    struct { unsigned char willRestoreState : 1; unsigned char didAddService : 1; unsigned char didReceiveReadRequest : 1; unsigned char didReceiveWriteRequests : 1; unsigned char centralDidSubscribeToCharacteristic : 1; unsigned char centralDidUnsubscribeFromCharacteristic : 1; unsigned char didStartAdvertising : 1; unsigned char didStartPeriodicAdvertising : 1; unsigned char didStopPeriodicAdvertising : 1; unsigned char isReadyToUpdate : 1; unsigned char centralDidConnect : 1; unsigned char centralDidUpdateConnectionParameters : 1; unsigned char didPublishL2CAPChannel : 1; unsigned char didUnpublishL2CAPChannel : 1; unsigned char didOpenL2CAPChannel : 1; unsigned char didStopAdvertisingWithError : 1; unsigned char didUpdateANCSAuthorization : 1; unsigned char didUpdateControllerBTClock : 1; unsigned char didRequestOfflineAdvPayloadRequestedWithReason : 1; } _delegateFlags;
    BOOL _observingKeyPaths;
}

@property (nonatomic) BOOL isAdvertising;
@property (readonly, retain, nonatomic) NSMapTable *centrals;
@property (readonly, retain, nonatomic) NSMutableArray *services;
@property (readonly, retain, nonatomic) NSMutableDictionary *characteristicIDs;
@property (readonly, retain, nonatomic) NSLock *updateLock;
@property (readonly, nonatomic) BOOL readyForUpdates;
@property (readonly, nonatomic) BOOL waitingForReady;
@property (retain, nonatomic) NSNumber *multipleAdvertisingSupported;
@property (readonly, retain, nonatomic) NSHashTable *l2capChannels;
@property unsigned long long attributeIDGenerator;
@property (readonly, nonatomic, getter=supportsMultipleAdvertising) BOOL isSupportingMultipleAdvertising;
@property (weak, nonatomic) id<CBPeripheralManagerDelegate> delegate;

+ (BOOL)supportsFeatures:(unsigned long long)a0;
+ (long long)authorizationStatus;

- (void)handleSupportedFeatures:(id)a0;
- (void)respondToTransaction:(id)a0 value:(id)a1 attributeID:(id)a2 result:(long long)a3;
- (void)handleReadyForUpdates:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)publishL2CAPChannel:(unsigned short)a0 requiresEncryption:(BOOL)a1 options:(id)a2;
- (void)addService:(id)a0;
- (void)handleAdvertisingStopped:(id)a0;
- (void)handleL2CAPChannelClosed:(id)a0;
- (void)handleL2CAPChannelOpened:(id)a0;
- (void)handlePeriodicAdvertisingStopped:(id)a0;
- (void)HandleControllerPeripheralBTClockUpdateMsg:(id)a0;
- (void)startAdvertising:(id)a0;
- (void)handleAdvertisingAddressChanged:(id)a0;
- (void)handleNotificationAdded:(id)a0;
- (void)removeService:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1 options:(id)a2;
- (void)handleServiceAdded:(id)a0;
- (id)l2capChannelForPeer:(id)a0 withPsm:(unsigned short)a1;
- (void)removeAllServices;
- (void)respondToRequest:(id)a0 withResult:(long long)a1;
- (void)publishL2CAPChannel:(unsigned short)a0 requiresEncryption:(BOOL)a1;
- (void)removeAllL2CAPChannels;
- (void)handleL2CAPChannelPublished:(id)a0;
- (BOOL)isMsgAllowedAlways:(unsigned short)a0;
- (id)centralWithIdentifier:(id)a0;
- (void)overrideLocalLeAddress:(id)a0;
- (BOOL)isMsgAllowedWhenOff:(unsigned short)a0;
- (void)handleRestoringState:(id)a0;
- (void)forEachCentral:(id /* block */)a0;
- (void)stopAdvertising;
- (void)stopPeriodicAdvertising:(id)a0;
- (void)handleMsg:(unsigned short)a0 args:(id)a1;
- (id)peerWithInfo:(id)a0;
- (void)HandleOfflineAdvPayloadRequestedWithReason:(id)a0;
- (void)handleL2CAPChannelUnpublished:(id)a0;
- (void)unpublishL2CAPChannel:(unsigned short)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)updateValue:(id)a0 forCharacteristic:(id)a1 onSubscribedCentrals:(id)a2;
- (void)handleConnectionParametersUpdated:(id)a0;
- (void)handleAdvertisingStarted:(id)a0;
- (void)handleGetAttributeValue:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)publishL2CAPChannel:(unsigned short)a0 requiresEncryption:(BOOL)a1 priority:(long long)a2;
- (void)setOfflineAdvertisingParamsAndData:(id)a0;
- (void)handleNotificationRemoved:(id)a0;
- (void)dealloc;
- (void)publishL2CAPChannelWithEncryption:(BOOL)a0;
- (void)handleSolicitedServicesFound:(id)a0;
- (void)handlePeriodicAdvertisingStarted:(id)a0;
- (void)publishL2CAPChannelWithEncryption:(BOOL)a0 priority:(long long)a1;
- (void)setDesiredConnectionLatency:(long long)a0 forCentral:(id)a1;
- (void)handleCentralDidUpdateANCSAuthorization:(id)a0;
- (void)startPeriodicAdvertising:(id)a0;
- (void)handleSetAttributeValues:(id)a0;
- (id)centralWithInfo:(id)a0;

@end
