@class HMFUnfairLock, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMFMemoryMonitor : HMFObject

@property (class, readonly) HMFMemoryMonitor *memoryMonitor;

@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *memoryPressureSource;
@property (nonatomic, getter=isMonitoring) BOOL monitoring;
@property (nonatomic) long long systemMemoryState;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)start;

@end
