@class NSString, NSMapTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, HMDDataStreamProtocolDelegate;

@interface HMDDataStreamBulkSendProtocol : NSObject <HMFLogging, HMDDataStreamProtocol, HMFTimerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id accessory;
@property (retain, nonatomic) NSMapTable *listeners;
@property (nonatomic) BOOL isConnected;
@property (readonly, copy, nonatomic) NSString *logIdentifier;
@property unsigned int nextSessionIdentifier;
@property (readonly) NSMapTable *activeBulkSendSessions;
@property (readonly) NSMutableDictionary *pendingBulkSendSessionContextBySessionIdentifier;
@property (readonly) id /* block */ bulkSendSessionContextFactory;
@property (weak, nonatomic) id<HMDDataStreamProtocolDelegate> dataStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isActive) BOOL active;

+ (id)logCategory;
+ (id)protocolName;

- (void).cxx_destruct;
- (void)removeListener:(id)a0;
- (void)timerDidFire:(id)a0;
- (void)addListener:(id)a0 fileType:(id)a1;
- (void)dataStream:(id)a0 didFailWithError:(id)a1;
- (void)dataStream:(id)a0 didReceiveResponse:(id)a1 header:(id)a2 payload:(id)a3;
- (void)dataStream:(id)a0 didReceiveEvent:(id)a1 header:(id)a2 payload:(id)a3;
- (void)dataStream:(id)a0 didReceiveRequest:(id)a1 header:(id)a2 payload:(id)a3;
- (void)dataStreamDidClose:(id)a0;
- (void)dataStreamDidOpen:(id)a0;
- (id)initWithQueue:(id)a0 accessory:(id)a1 logIdentifier:(id)a2;
- (void)openSessionForFileType:(id)a0 reason:(id)a1 queue:(id)a2 callback:(id /* block */)a3;
- (void)_notifyActiveStatusChangedFromPreviousValue:(BOOL)a0;
- (id)initWithQueue:(id)a0 accessory:(id)a1 logIdentifier:(id)a2 bulkSendSessionContextFactory:(id /* block */)a3;
- (void)_closeAllSessionsWithError:(id)a0;
- (void)_handleDataMessage:(id)a0;
- (void)_handleCloseMessage:(id)a0;
- (void)_handleOpenWithRequestHeader:(id)a0 payload:(id)a1;
- (void)_startSessionCandidate:(id)a0 queue:(id)a1 callback:(id /* block */)a2;
- (void)_rejectSessionCandidate:(id)a0 status:(unsigned short)a1;
- (void)_cancelSessionWithIdentifier:(id)a0 reason:(unsigned short)a1 hadReceivedEof:(BOOL)a2;
- (id)_createSessionIdentifier;
- (void)_sendOpenResponseWithRequestHeader:(id)a0 streamIdentifier:(id)a1;
- (id)_createSessionFromCandidate:(id)a0 queue:(id)a1;
- (void)_pumpMessage:(id)a0 session:(id)a1;
- (void)_pumpReceiveFailure:(id)a0 session:(id)a1;
- (void)_sendOpenResponseWithRequestHeader:(id)a0 bulkSendStatus:(unsigned short)a1;
- (void)_sendOpenResponseWithRequestHeader:(id)a0 status:(unsigned short)a1;
- (id)_createSessionCandidateWithRequestHeader:(id)a0;
- (id)_getBulkSendSessionForSessionIdentifier:(id)a0;
- (void)_removeBulkSendSessionForSessionIdentifier:(id)a0;
- (void)_sendAckMessageWithIdentifier:(id)a0;
- (void)_sendCloseMessageWithIdentifier:(id)a0 reason:(unsigned short)a1;
- (void)_openSessionForFileType:(id)a0 reason:(id)a1 queue:(id)a2 callback:(id /* block */)a3;
- (void)asyncBulkSendSessionCandidate:(id)a0 didAcceptOnQueue:(id)a1 callback:(id /* block */)a2;
- (void)asyncBulkSendSessionCandidate:(id)a0 didRejectWithStatus:(unsigned short)a1;
- (void)asyncBulkSendSessionDidCancelSessionWithIdentifier:(id)a0 reason:(unsigned short)a1 hadReceivedEof:(BOOL)a2;

@end
