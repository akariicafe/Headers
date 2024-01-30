@class NSObject, NSString, NSMutableDictionary, NSHashTable, NSMutableArray, IDSService;
@protocol OS_dispatch_queue, SOSCoreAnalyticsReporting, OS_dispatch_semaphore;

@interface SOSCoordinator : NSObject <IDSServiceDelegate> {
    IDSService *_idsService;
    NSMutableArray *_processingEventUUIDs;
    NSObject<OS_dispatch_semaphore> *_eventProcessingSemaphore;
    NSObject<OS_dispatch_queue> *_eventUUIDArrayQueue;
    NSObject<OS_dispatch_queue> *_pendingMessagesQueue;
    NSMutableDictionary *_pendingMessagesById;
    NSMutableDictionary *_pendingMessageRetriesById;
    BOOL _ackSuccess;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) id<SOSCoreAnalyticsReporting> coreAnalyticsReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (BOOL)isIncomingMessageValidHandoffAck:(id)a0;
- (long long)sourceDevice;
- (BOOL)shouldHandoffToPairedDevice:(long long)a0;
- (void)addObserver:(id)a0;
- (long long)SOSCoordinationMessageTypeForString:(id)a0;
- (void)_updateStateForPairedDevice:(id)a0;
- (void)sendUpdateToObserversWithStatus:(id)a0 progression:(long long)a1 shouldHandleThirdParty:(BOOL)a2;
- (BOOL)_sendUrgentMessageToPairedDevice:(id)a0 retries:(id)a1;
- (void)syncProgressionWithPairedDevice:(long long)a0 sosStatus:(id)a1;
- (BOOL)isIncomingMessageValidSOSHandoff:(id)a0;
- (BOOL)sendUrgentMessageToPairedDevice:(id)a0;
- (BOOL)shouldRetryMessage:(id)a0;
- (void)handleSOSMessageTypeProgressionSync:(id)a0;
- (void)dealloc;
- (void)_handleServiceUpdate:(id)a0;
- (void)removeObserver:(id)a0;
- (void)sendAckToHandoffMessage:(id)a0 success:(BOOL)a1;
- (void)handleSOSMessageTypeHandoffSOSAck:(id)a0;
- (BOOL)isPairedDeviceNearby;
- (BOOL)tryPushToPairedDeviceWithUUID:(id)a0 triggerMechanism:(long long)a1;
- (id)init;
- (id)effectivePairedDevice;
- (void)reportHandoff:(long long)a0 result:(long long)a1;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3;
- (void)handleSOSMessageTypeHandoffSOS:(id)a0;
- (BOOL)processEventWithUUID:(id)a0 triggerMechanism:(long long)a1;

@end
