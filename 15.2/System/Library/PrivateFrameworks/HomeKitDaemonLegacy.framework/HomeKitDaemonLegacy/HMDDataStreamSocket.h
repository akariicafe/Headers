@class NSString, HMFUnfairLock, HMDDataStreamStreamProtocol, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HMDDataStreamSocketDelegate;

@interface HMDDataStreamSocket : NSObject <HMFLogging, HMDDataStreamSocketPrivate>

@property (readonly, weak) HMDDataStreamStreamProtocol *streamProtocol;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFUnfairLock *lock;
@property (nonatomic, getter=isClosing) BOOL closing;
@property (nonatomic, getter=isClosed) BOOL closed;
@property (readonly) NSMutableArray *pendingReads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDDataStreamSocketDelegate> delegate;
@property (readonly) NSString *applicationProtocolName;
@property unsigned long long trafficClass;

+ (id)logCategory;

- (void)closeWithError:(id)a0;
- (BOOL)writeData:(id)a0 error:(id *)a1;
- (void)close;
- (void).cxx_destruct;
- (id)readData;
- (void)writeData:(id)a0 completion:(id /* block */)a1;
- (id)initWithStreamProtocol:(id)a0 applicationProtocolName:(id)a1 workQueue:(id)a2;
- (void)handleIncomingData:(id)a0;
- (void)closeInitiated;
- (void)_writeData:(id)a0 completion:(id /* block */)a1;

@end
