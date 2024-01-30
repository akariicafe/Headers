@class NSObject, NSNumber, HMDDataStreamFrameReader, NSString, NSMutableArray, HMDHAPAccessory, HMDCharacteristic;
@protocol OS_dispatch_queue, HMDDataStreamTransportDelegate;

@interface HMDDataStreamHAPTransport : NSObject <HMFLogging, HMDDataStreamTransport>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (retain) HMDCharacteristic *transportCharacteristic;
@property (retain) HMDCharacteristic *interruptCharacteristic;
@property (readonly) NSNumber *sessionIdentifier;
@property (readonly) unsigned long long maxControllerTransportMTU;
@property (readonly) HMDDataStreamFrameReader *byteReader;
@property (readonly) NSString *logIdentifier;
@property (readonly) NSString *notificationClientIdentifier;
@property (readonly) NSMutableArray *pendingWrites;
@property BOOL isWriteInProgress;
@property BOOL lastAccessoryRequestToSendFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMDDataStreamTransportDelegate> delegate;

+ (id)logCategory;

- (void)connect;
- (void)close;
- (void)setTrafficClass:(unsigned long long)a0;
- (void)_handleReceivedData:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_isRunning;
- (void)_registerForMessages;
- (id)initWithAccessory:(id)a0 sessionIdentifier:(long long)a1 maxControllerTransportMTU:(unsigned long long)a2 workQueue:(id)a3 logIdentifier:(id)a4;
- (void)sendRawFrame:(id)a0 completion:(id /* block */)a1;
- (void)_stopWithError:(id)a0;
- (void)_teardownSessionWithError:(id)a0;
- (void)_deregisterForMessages;
- (void)_notifyDelegateDidOpen;
- (void)_notifyDelegateDidClose;
- (void)_notifyDelegateDidFailWithError:(id)a0;
- (void)_notifyDelegateDidReceiveFrame:(id)a0;
- (id)_getPendingWritesUpToLength:(unsigned long long)a0;
- (id)_buildWriteRequestWithError:(id *)a0 shouldForceClose:(BOOL)a1;
- (void)_doNextWriteOperation;
- (void)_handleCompletionWithResponseTuples:(id)a0;
- (void)_stopTransportForWriteFailureError:(id)a0;
- (void)_removeAndMarkCompleteAllCompletedWrites;
- (void)_cancelAllPendingWritesWithError:(id)a0;
- (void)_notifyWriteOperation:(id)a0 didCompleteWithError:(id)a1;
- (void)_handleCharacteristicsValueUpdated:(id)a0;
- (void)_handleInterruptCharacteristicValue:(id)a0;

@end
