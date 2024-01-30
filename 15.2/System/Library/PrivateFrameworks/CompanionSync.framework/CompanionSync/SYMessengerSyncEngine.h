@class NMSMessageCenter, NSString, NSDictionary, NSMapTable, SYDevice, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SYMessengerSyncEngine : SYSyncEngine <NMSMessageCenterDelegate> {
    NMSMessageCenter *_messageCenter;
    NSObject<OS_dispatch_semaphore> *_lookupLock;
    NSMapTable *_requestLookup;
    NSMapTable *_callbackLookup;
    SYDevice *_activeDevice;
    NSString *_sessionDeviceID;
}

@property (copy, nonatomic) NSDictionary *customIDSOptions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *idsQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)messageCenter:(id)a0 didResolveIDSIdentifierForRequest:(id)a1;
- (id)stateForLogging;
- (BOOL)resume:(id *)a0;
- (void).cxx_destruct;
- (void)suspend;
- (void)beginSession;
- (void)enqueueSyncRequest:(id)a0 withMessageID:(unsigned short)a1 priority:(long long)a2 options:(id)a3 userContext:(id)a4 callback:(id /* block */)a5;
- (void)_updateMessageCenterPrefs:(id)a0;
- (id)messageCenter;
- (BOOL)_checkMessageHeader:(id)a0 messageID:(id)a1;
- (void)_recordLastSeqNo:(id)a0;
- (void)messageCenter:(id)a0 didReceiveUnknownRequest:(id)a1;
- (void)messageCenter:(id)a0 didReceiveIncomingFileTransfer:(id)a1;
- (void)messageCenter:(id)a0 didResolveIDSIdentifier:(id)a1 forResponse:(id)a2;
- (void)messageCenter:(id)a0 didResolveIDSIdentifier:(id)a1 forFileTransfer:(id)a2;
- (void)messageCenter:(id)a0 didSuccessfullySendRequestWithIdentifier:(id)a1 userInfo:(id)a2;
- (void)messageCenter:(id)a0 didSuccessfullyDeliverRequestWithIdentifier:(id)a1 userInfo:(id)a2;
- (void)messageCenter:(id)a0 failedToSendMessageWithIdentifier:(id)a1 error:(id)a2 userInfo:(id)a3;
- (void)messageCenter:(id)a0 activeDeviceChanged:(id)a1 acknowledgement:(id /* block */)a2;
- (void)messageCenter:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)messageCenter:(id)a0 connectedDevicesChanged:(id)a1;
- (BOOL)targetIsNearby;
- (BOOL)targetConnected;
- (id)initWithService:(id)a0 queue:(id)a1;
- (id)outputStreamWithMetadata:(id)a0 priority:(long long)a1 options:(id)a2 context:(id)a3 error:(id *)a4;
- (void)_hookupMessageHandler;
- (id)_wrapMessage:(id)a0 ofType:(unsigned short)a1 userInfo:(id)a2;
- (id)_fileTransferHeader;
- (void)_handleError:(id)a0 forMessageID:(unsigned short)a1;
- (id)_getRequestHeader:(id)a0;
- (void)_suspendIncomingMessages;
- (void)_resumeIncomingMessages;
- (id)_getResponseHeader:(id)a0;
- (id)cancelMessagesReturningFailures:(id)a0;

@end
