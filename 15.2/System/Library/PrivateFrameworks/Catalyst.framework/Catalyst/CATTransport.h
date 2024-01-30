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

- (void)enqueueDelegateDidInterruptWithError:(id)a0;
- (void)didInvalidate;
- (void)invalidateConnection;
- (void)delegateDidInvalidate;
- (void)didReceiveMessage:(id)a0;
- (void)sendMessage:(id)a0;
- (void)invalidSendForMessage:(id)a0;
- (void)delegateDidResume;
- (void)enqueueDelegateDidReceiveMessage:(id)a0;
- (void)cancelHelloMessageAndResumeQueueOperations;
- (void)didInterruptWithError:(id)a0;
- (void)resumeQueue;
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
- (void)resumeConnection;
- (id)description;
- (void)enqueueDelegateDidInvalidateAndFinalize;
- (void)enqueueDelegateCouldNotConnectWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)suspend;
- (void)resumeQueueAndConnection;
- (void)invalidate;
- (void)resume;
- (void)suspendQueueAndConnection;
- (void)enqueueSendForMessage:(id)a0;
- (void)suspendQueue;
- (void)dealloc;
- (id)operationToSendMessage:(id)a0;
- (void)sendHelloMessageAndResumeQueue;
- (void)enqueueDelegateDidConnect;
- (id)debugDescription;
- (void)suspendConnection;

@end
