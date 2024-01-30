@class HMDHTTPDevice, HMFTimer, NSMutableDictionary, NSOperationQueue, HMFHTTPClientConnection, NSMutableArray;

@interface _HMDHTTPServerClientConnection : HMFObject {
    NSMutableDictionary *_pendingTransactionCompletionHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HMDHTTPDevice *device;
@property (retain, nonatomic) HMFHTTPClientConnection *connection;
@property (readonly, nonatomic) NSOperationQueue *requestOperationQueue;
@property (readonly, nonatomic) NSMutableArray *receiveMessageRequests;
@property (readonly, nonatomic) NSOperationQueue *transactionOperationQueue;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic) HMFTimer *lostConnectionTimer;

+ (id)shortDescription;

- (id)initWithDevice:(id)a0;
- (id)shortDescription;
- (id)debugDescription;
- (id)init;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;
- (id)descriptionWithPointer:(BOOL)a0;
- (void)queueRequest:(id)a0;
- (void)_reallySendMessage:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)addCompletionHandler:(id /* block */)a0 forTransactionIdentifier:(id)a1;
- (id)dequeueRequest;
- (id /* block */)removeCompletionHandlerForTransactionIdentifier:(id)a0;
- (void)sendMessage:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;

@end
