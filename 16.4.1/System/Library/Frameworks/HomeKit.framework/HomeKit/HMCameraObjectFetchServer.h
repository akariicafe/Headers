@class NSObject, NSUUID, NSString, HMFMessageTransport, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMCameraObjectFetchServer : HMFObject <HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSMutableArray *currentlyBatchedFetchedObjects;
@property (weak) HMFMessageTransport *transport;
@property unsigned long long totalFetchedObjectsCount;
@property (readonly, copy) NSUUID *clientUUID;
@property (readonly) BOOL canHandleMoreFetchedObjects;
@property unsigned long long fetchedObjectsBatchLimit;
@property unsigned long long totalFetchedObjectsLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithFetchMessage:(id)a0 workQueue:(id)a1;
- (void)_notifyTransport:(id)a0 ofFetchedObjects:(id)a1 forClientUUID:(id)a2 responseHandler:(id /* block */)a3;
- (void)handleFetchedObject:(id)a0;
- (id)initWithClientUUID:(id)a0 transport:(id)a1 workQueue:(id)a2;
- (void)sendCurrentlyBatchedFetchedObjectsWithCompletion:(id /* block */)a0;

@end
