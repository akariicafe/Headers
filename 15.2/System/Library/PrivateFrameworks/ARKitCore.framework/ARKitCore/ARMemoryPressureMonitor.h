@class NSObject;
@protocol OS_dispatch_source, ARMemoryPressureMonitorDelegate;

@interface ARMemoryPressureMonitor : NSObject {
    NSObject<OS_dispatch_source> *_memoryPressureEventSource;
}

@property (weak, nonatomic) id<ARMemoryPressureMonitorDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
