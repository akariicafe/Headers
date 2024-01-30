@class NSObject;
@protocol OS_dispatch_source;

@interface WBSMemoryPressureMonitor : NSObject {
    NSObject<OS_dispatch_source> *_memoryPressureSource;
}

@property BOOL pressured;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
