@class NSString, HMFUnfairLock, HMDDataStreamStreamProtocol, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HMDDataStreamSocketDelegate;

@interface HMDDataStreamSocket : NSObject <HMDDataStreamSocketPrivate>

@property (readonly, weak) HMDDataStreamStreamProtocol *streamProtocol;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFUnfairLock *lock;
@property (nonatomic, getter=isClosed) BOOL closed;
@property (readonly) NSMutableArray *pendingReads;
@property (weak) id<HMDDataStreamSocketDelegate> delegate;
@property (readonly) NSString *applicationProtocolName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)writeData:(id)a0 error:(id *)a1;
- (void)close;
- (void).cxx_destruct;
- (id)readData;
- (void)closeWithError:(id)a0;
- (id)initWithStreamProtocol:(id)a0 applicationProtocolName:(id)a1 workQueue:(id)a2;
- (void)handleIncomingData:(id)a0;

@end
