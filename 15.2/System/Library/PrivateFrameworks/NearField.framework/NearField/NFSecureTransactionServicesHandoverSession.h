@class NSObject;
@protocol NFTNEPReaderDelegate, NFSecureTransactionServicesHandoverSessionDelegate, NFTNEPTagDeviceDelegate;

@interface NFSecureTransactionServicesHandoverSession : NFSession <NFSecureTransactionServicesHandoverSessionCallbacksInterface>

@property (retain, nonatomic) NSObject<NFTNEPTagDeviceDelegate> *tagDeviceDelegate;
@property (retain, nonatomic) NSObject<NFTNEPReaderDelegate> *tagReaderDelegate;
@property (weak) id<NFSecureTransactionServicesHandoverSessionDelegate> delegate;

- (void).cxx_destruct;
- (void)handleSessionSuspended:(id)a0;
- (void)handleSessionResumed;
- (void)tnepTagDeviceSelected:(id)a0 respondHandler:(id /* block */)a1;
- (void)tnepTagDeviceNDEFMessageReceived:(id)a0;
- (void)fieldChange:(BOOL)a0;
- (void)fieldNotification:(id)a0;
- (void)tnepTagDeviceReaderDetected;
- (void)tnepTagDeviceDeselected:(id)a0;
- (void)tnepReaderServicesDiscovered:(id)a0;
- (void)tnepReaderServicesAborted:(id)a0;
- (void)connectionHandoverTNEPServiceSelected:(id)a0;
- (void)connectionHandoverProcessFailure:(id)a0;
- (void)connectionHandoverProcessCompleted;
- (void)stopTNEPOperation;
- (void)startSTSNotificationListenerWithEndpoint:(id)a0;
- (id)startTNEPTagDeviceWithService:(id)a0 optionalRecords:(id)a1 delegate:(id)a2;
- (void)singleResponseCommunicationTagSend:(id)a0 completionHandler:(id /* block */)a1;
- (id)startTNEPReaderWithDelegate:(id)a0;
- (void)singleResponseCommunicationReaderSend:(id)a0 completionHandler:(id /* block */)a1;
- (id)selectService:(id)a0;
- (id)deselectService;
- (id)restartPolling;

@end
