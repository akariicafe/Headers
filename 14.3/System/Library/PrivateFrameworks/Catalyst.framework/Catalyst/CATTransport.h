@class CATOperationQueue, NSString, CATStateMachine;
@protocol CATTransportDelegate;

@interface CATTransport : NSObject {
    CATStateMachine *mFSM;
    CATOperationQueue *mControlQueue;
    CATOperationQueue *mMessageQueue;
    CATTransport *mStrongSelf;
}

@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<CATTransportDelegate> delegate;

- (void)didInvalidate;
- (void)resumeQueue;
- (id)operationToSendMessage:(id)a0;
- (void)sendMessage:(id)a0;
- (void)enqueueDelegateDidInterruptWithError:(id)a0;
- (void)invalidateConnection;
- (id)init;
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
- (void).cxx_destruct;
- (void)enqueueDelegateDidReceiveMessage:(id)a0;
- (void)didInterruptWithError:(id)a0;
- (void)dealloc;
- (void)suspendQueueAndConnection;
- (void)delegateDidInvalidate;
- (void)delegateDidResume;
- (void)enqueueDelegateDidConnect;
- (id)description;
- (void)enqueueSendForMessage:(id)a0;
- (void)resumeConnection;
- (void)cancelHelloMessageAndResumeQueueOperations;
- (void)suspendConnection;
- (void)enqueueDelegateCouldNotConnectWithError:(id)a0;
- (void)invalidSendForMessage:(id)a0;
- (void)resume;
- (void)resumeQueueAndConnection;
- (void)sendHelloMessageAndResumeQueue;
- (id)debugDescription;
- (void)suspendQueue;
- (void)enqueueDelegateDidInvalidateAndFinalize;
- (void)suspend;
- (void)didReceiveMessage:(id)a0;
- (void)invalidate;

@end
