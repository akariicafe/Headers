@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface CBHIDPerformanceMonitor : NSObject <CBActivatable> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (copy, nonatomic) NSArray *devices;
@property (copy, nonatomic) id /* block */ excessiveIntervalHandler;
@property (nonatomic) double intervalMs;
@property (copy, nonatomic) id /* block */ summaryHandler;
@property (nonatomic) double testSeconds;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)_activateWithCompletion:(id /* block */)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)_invalidated;

@end
