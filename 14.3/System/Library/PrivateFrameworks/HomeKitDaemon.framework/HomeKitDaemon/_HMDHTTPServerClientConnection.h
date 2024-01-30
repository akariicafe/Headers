@class HMDHTTPDevice, HMFTimer, NSMutableDictionary, NSOperationQueue, HMFHTTPClientConnection, NSMutableArray, HMFUnfairLock;

@interface _HMDHTTPServerClientConnection : HMFObject {
    NSMutableDictionary *_pendingTransactionCompletionHandlers;
    HMFUnfairLock *_lock;
}

@property (readonly, nonatomic) HMDHTTPDevice *device;
@property (retain, nonatomic) HMFHTTPClientConnection *connection;
@property (readonly, nonatomic) NSOperationQueue *requestOperationQueue;
@property (readonly, nonatomic) NSMutableArray *receiveMessageRequests;
@property (readonly, nonatomic) NSOperationQueue *transactionOperationQueue;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic) HMFTimer *lostConnectionTimer;

+ (id)shortDescription;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)initWithDevice:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)description;
- (id)debugDescription;
- (void)invalidate;
- (void)sendMessage:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)_reallySendMessage:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (id)dequeueRequest;
- (void)addCompletionHandler:(id /* block */)a0 forTransactionIdentifier:(id)a1;
- (id /* block */)removeCompletionHandlerForTransactionIdentifier:(id)a0;
- (void)queueRequest:(id)a0;

@end
