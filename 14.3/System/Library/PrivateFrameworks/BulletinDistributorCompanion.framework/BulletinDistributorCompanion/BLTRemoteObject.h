@class BLTSimpleCache, NSString, BLTPBProtobufSequenceNumberManager, NSMutableDictionary, NSObject, NSLock;
@protocol OS_dispatch_queue, BLTAbstractIDSDevice, BLTAbstractIDSService;

@interface BLTRemoteObject : NSObject <IDSServiceDelegate> {
    NSMutableDictionary *_idsSendIDToCompletionHandler;
    NSMutableDictionary *_idsSendIDToResponseHandler;
    NSMutableDictionary *_idsFileIDToResponseHandler;
    NSString *_serviceName;
    BOOL _full;
    NSObject<OS_dispatch_queue> *_idsQueue;
    id<BLTAbstractIDSDevice> _defaultPairedDevice;
    NSMutableDictionary *_idsRequestMessageTypeToSelector;
    NSLock *_sequenceNumberSendLock;
    NSObject<OS_dispatch_queue> *_connectionStatusQueue;
    unsigned long long _stateHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) id<BLTAbstractIDSService> service;
@property (readonly, nonatomic) BLTPBProtobufSequenceNumberManager *sequenceNumberManager;
@property (retain, nonatomic) BLTSimpleCache *mruCacheOfSends;
@property (retain, nonatomic) BLTSimpleCache *mruCacheOfReceives;
@property (nonatomic) unsigned long long lastKnownConnectionStatus;
@property (getter=isPairedDeviceReady) BOOL pairedDeviceReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)sendRequest:(id)a0;
- (void).cxx_destruct;
- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)dealloc;
- (unsigned long long)connectionStatus;
- (void)setProtobufAction:(SEL)a0 forIncomingRequestsOfType:(unsigned short)a1;
- (void)setProtobufAction:(SEL)a0 forIncomingResponsesOfType:(unsigned short)a1;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (id)initWithServiceName:(id)a0 idsQueueName:(char *)a1 andClientQueue:(id)a2;
- (void)disableStandaloneTestMode;
- (void)_updateConnectionStatus;
- (void)_deviceConnectionStatusChanged:(id)a0;
- (void)_sendAckInitialSequenceNumberForSession:(id)a0 sessionState:(unsigned long long)a1;
- (void)_sendAssertForSession;
- (void)_queueHandleIDSProtobuf:(id)a0;
- (BOOL)_callSendCompletionHandlerWithSuccess:(BOOL)a0 identifier:(id)a1 error:(id)a2;
- (void)_handleNewSessionState:(unsigned long long)a0;
- (BOOL)_sequenceErrorDidHappenAndHandled:(long long)a0 service:(id)a1 incomingIdentifier:(id)a2;
- (void)_sendAckInitialSequenceNumberForSession:(id)a0 withAssert:(BOOL)a1 sessionState:(unsigned long long *)a2;
- (void)_queueSendRequest:(id)a0;
- (void)_storeProtobufAction:(SEL)a0 messageType:(unsigned short)a1 messageSendType:(long long)a2;
- (void)handleIncomingMessage:(id)a0;
- (void)_queueUpdateConnectionStatusWithResetDefaulteDevice:(BOOL)a0;
- (void)_updateConnectionStatusWithResetDefaulteDevice:(BOOL)a0;
- (void)_setStandaloneTestModeEnabled:(BOOL)a0;
- (void)handleAckInitialSequenceNumberRequest:(id)a0;
- (void)registerProtobufHandlers;
- (void)sendRequest:(id)a0 type:(unsigned short)a1 didSend:(id /* block */)a2;
- (void)sendRequest:(id)a0 type:(unsigned short)a1 withTimeout:(id)a2 didSend:(id /* block */)a3;
- (void)sendRequest:(id)a0 type:(unsigned short)a1 withTimeout:(id)a2 withDescription:(id)a3 didSend:(id /* block */)a4;
- (void)sendRequest:(id)a0 type:(unsigned short)a1 withTimeout:(id)a2 withDescription:(id)a3 onlyOneFor:(id)a4 didSend:(id /* block */)a5 andResponse:(id /* block */)a6;
- (id)_wrapError:(id)a0 identifier:(id)a1;
- (void)_queuePerformSend:(id /* block */)a0 responseToRequest:(id)a1 withTimeout:(id)a2 withDescription:(id)a3 shortDescription:(id)a4 onlyOneFor:(id)a5 allowCloudDelivery:(BOOL)a6 nonWaking:(BOOL)a7 didSend:(id /* block */)a8 andResponse:(id /* block */)a9;
- (BOOL)_idsQueueCallSendCompletionHandlerWithSuccess:(BOOL)a0 identifier:(id)a1 error:(id)a2;
- (void)_removeAndHandleResponseHandler:(id)a0;
- (void)handleFileURL:(id)a0 extraMetadata:(id)a1;
- (id)initWithServiceName:(id)a0 idsQueueName:(char *)a1;
- (void)handleIDSProtobuf:(id)a0;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)a0 maximumSendDelay:(unsigned long long)a1 minimumResponseDelay:(unsigned long long)a2 maximumResponseDelay:(unsigned long long)a3;
- (void)sendRequest:(id)a0 type:(unsigned short)a1;
- (void)sendResponse:(id)a0 type:(unsigned short)a1 withRequest:(id)a2 withTimeout:(id)a3 withDescription:(id)a4 onlyOneFor:(id)a5 didSend:(id /* block */)a6;
- (void)sendRequest:(id)a0 type:(unsigned short)a1 withTimeout:(id)a2 didSend:(id /* block */)a3 didQueue:(id /* block */)a4;
- (void)sendFileURL:(id)a0 withTimeout:(id)a1 extraMetadata:(id)a2 responseHandlers:(id)a3 didSend:(id /* block */)a4 didQueue:(id /* block */)a5;

@end
