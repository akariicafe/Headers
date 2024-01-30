@class NSString, NSDictionary, NSObject, HMDHAPAccessory;
@protocol HMDAccessoryDataStreamAdapterDelegate, OS_dispatch_queue, HMDDataStreamBulkSendSession;

@interface HMDAccessoryDataStreamAdapter : HMFObject <HMFLogging, HMDDataStreamBulkSendListener>

@property (readonly, getter=isSessionOpenInProgress) BOOL sessionOpenInProgress;
@property (readonly, getter=isBulkSendActive) BOOL bulkSendActive;
@property (retain) id<HMDDataStreamBulkSendSession> currentBulkSendSession;
@property (copy) id /* block */ pendingOpenSessionCallback;
@property BOOL transportReady;
@property BOOL didBulkSendFail;
@property BOOL didBulkSendComplete;
@property (weak) id<HMDAccessoryDataStreamAdapterDelegate> delegate;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSString *fileType;
@property (readonly) NSDictionary *metadata;
@property (readonly) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)shutDown;
- (void)readData;
- (id)logIdentifier;
- (void)dealloc;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (void)_openSession;
- (void)_setUpTransport;
- (void)_bulkSendDidComplete;
- (void)_bulkSendDidFail;
- (void)_callPendingOpenSessionCallbackWithResult:(id)a0 error:(id)a1;
- (void)_handleAccessoryDidClose;
- (BOOL)_handleFrame:(id)a0;
- (void)accessory:(id)a0 didReceiveBulkSessionCandidate:(id)a1;
- (void)accessoryDidCloseDataStream:(id)a0;
- (void)accessoryDidStartListening:(id)a0;
- (void)callPendingOpenSessionCallbackWithResult:(id)a0 error:(id)a1;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 fileType:(id)a2 metadata:(id)a3 reason:(id)a4;
- (void)setUpWithCallback:(id /* block */)a0;

@end
