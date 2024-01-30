@class NSObject;
@protocol OS_dispatch_source;

@interface WBSMemoryPressureMonitor : NSObject {
    NSObject<OS_dispatch_source> *_memoryPressureSource;
}

@property BOOL pressured;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
