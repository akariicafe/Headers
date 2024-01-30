@class CATOperationQueue, NSString, CATSerialOperationEnqueuer, CATIDSServiceConnectionMessageProcessor, NSError, NSObject, CATIDSServiceConnectionMetadata;
@protocol CATIDSMessageBroadcaster, CATIDSPrimitives, CATCancelable, CATIDSServiceConnectionDataAggregator, CATResettableTimer, OS_dispatch_queue, CATIDSServiceConnectionDataMessageQueue, CATIDSServiceConnectionDelegate, CATIDSSubscription;

@interface CATIDSServiceConnection : NSObject <CATIDSServiceConnectionDataAggregatorDelegate, CATIDSServiceConnectionMessageProcessorDelegate, CATIDSMessageBroadcastHandler, CATIDSServiceConnectionDataMessageQueueDelegate> {
    NSString *mDestinationAddress;
    NSString *mSourceAppleID;
    id<CATIDSPrimitives> mIDSPrimitives;
    id<CATCancelable> mNetworkPowerAssertion;
    id<CATIDSMessageBroadcaster> mMessageBroadcaster;
    id<CATIDSServiceConnectionDataMessageQueue> mDataMessageQueue;
    id<CATIDSServiceConnectionDataAggregator> mDataAggregator;
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSObject<OS_dispatch_queue> *mDelegateQueue;
    CATOperationQueue *mSendQueue;
    CATSerialOperationEnqueuer *mControlOperationEnqueuer;
    id<CATResettableTimer> mKeepAliveTimer;
    CATIDSServiceConnectionMessageProcessor *mMessageProcessor;
    id<CATIDSSubscription> mMessageSubscription;
}

@property (nonatomic, getter=isClosed) BOOL closed;
@property (retain, nonatomic) NSError *closedError;
@property (weak, nonatomic) id<CATIDSServiceConnectionDelegate> delegate;
@property (readonly, nonatomic) CATIDSServiceConnectionMetadata *metadata;

+ (id)keepAliveTimerIdentifier;
+ (id)connectionWithMetadata:(id)a0 configuration:(id)a1 IDSPrimitives:(id)a2 messageBroadcaster:(id)a3 timerSource:(id)a4 dataMessageQueue:(id)a5 dataAggregator:(id)a6 networkPowerAssertion:(id)a7 workQueue:(id)a8 delegateQueue:(id)a9 destinationAddress:(id)a10 sourceAppleID:(id)a11;
+ (id)acknowledgeContent;
+ (id)keepAliveContent;
+ (id)closeContentWithError:(id)a0;
+ (id)connectionWithMetadata:(id)a0 configuration:(id)a1 capabilities:(id)a2 IDSPrimitives:(id)a3 messageBroadcaster:(id)a4 timerSource:(id)a5 networkPowerAssertion:(id)a6 workQueue:(id)a7 delegateQueue:(id)a8 destinationAddress:(id)a9 sourceAppleID:(id)a10;

- (void)close;
- (void)_close;
- (void)sendData:(id)a0 completion:(id /* block */)a1;
- (id)description;
- (void).cxx_destruct;
- (void)connectionDataAggregatorWantsToReportSequenceNumber:(id)a0;
- (void)connectionDataAggregator:(id)a0 isMissingSequenceNumbers:(id)a1;
- (void)connectionDataAggregator:(id)a0 aggregatedData:(id)a1 withNumber:(unsigned long long)a2;
- (void)_sendData:(id)a0 completion:(id /* block */)a1;
- (void)keepAliveTimerDidFire:(id)a0 fireCount:(unsigned long long)a1 isFinalFire:(BOOL)a2;
- (id)initWithMetadata:(id)a0 configuration:(id)a1 IDSPrimitives:(id)a2 messageBroadcaster:(id)a3 timerSource:(id)a4 dataMessageQueue:(id)a5 dataAggregator:(id)a6 networkPowerAssertion:(id)a7 workQueue:(id)a8 delegateQueue:(id)a9 destinationAddress:(id)a10 sourceAppleID:(id)a11;
- (void)tearDownWithError:(id)a0 shouldReportToRemote:(BOOL)a1;
- (id)retransmitContentForSequenceNumbers:(id)a0;
- (void)sendContent:(id)a0;
- (id)requestMissingDataContentWithExpectedSequenceNumber:(unsigned long long)a0;
- (void)messageProcessorWantsToAcknowledgeRemote:(id)a0;
- (void)messageProcessorWantsToExtendKeepAlive:(id)a0;
- (void)messageProcessor:(id)a0 wantsToCloseWithError:(id)a1;
- (void)messageProcessor:(id)a0 wantsAggregation:(id)a1;
- (void)messageProcessor:(id)a0 wantsRetransmission:(id)a1;
- (void)messageProcessor:(id)a0 receivedExpectedSequence:(unsigned long long)a1;
- (void)messageProcessor:(id)a0 wantsToAckUpTo:(unsigned long long)a1;
- (void)processMessage:(id)a0 senderAppleID:(id)a1 senderAddress:(id)a2;
- (void)dataMessageQueue:(id)a0 wantsToCheckRemote:(unsigned long long)a1;
- (void)dataMessageQueue:(id)a0 needsToSendContents:(id)a1 shouldSkipTheLine:(BOOL)a2 completion:(id /* block */)a3;

@end
