@class NSObject, CARPFUnfairLock;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CARPFMemoryMonitor : CARPFObject

@property (class, readonly) CARPFMemoryMonitor *memoryMonitor;

@property (readonly, nonatomic) CARPFUnfairLock *lock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *memoryPressureSource;
@property (nonatomic, getter=isMonitoring) BOOL monitoring;
@property (nonatomic) long long systemMemoryState;

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stop;

@end
