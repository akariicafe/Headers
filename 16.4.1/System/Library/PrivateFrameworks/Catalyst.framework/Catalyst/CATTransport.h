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

- (void)invalidateConnection;
- (void)enqueueDelegateDidInterruptWithError:(id)a0;
- (void)resumeConnection;
- (void)delegateDidInvalidate;
- (void)suspendQueue;
- (void)enqueueSendForMessage:(id)a0;
- (void)enqueueDelegateDidConnect;
- (id)operationToSendMessage:(id)a0;
- (void)didInterruptWithError:(id)a0;
- (void)suspendQueueAndConnection;
- (void)resumeQueue;
- (void)enqueueDelegateDidReceiveMessage:(id)a0;
- (void)resumeQueueAndConnection;
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
- (void)didReceiveMessage:(id)a0;
- (void)cancelHelloMessageAndResumeQueueOperations;
- (void)invalidSendForMessage:(id)a0;
- (void)sendHelloMessageAndResumeQueue;
- (void)enqueueDelegateDidInvalidateAndFinalize;
- (void)delegateDidResume;
- (void)suspendConnection;
- (void)sendMessage:(id)a0;
- (void)suspend;
- (void)didInvalidate;
- (id)debugDescription;
- (void)dealloc;
- (id)init;
- (void)enqueueDelegateCouldNotConnectWithError:(id)a0;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resume;

@end
