@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface OSADiagnosticMonitorClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_observers;
}

@property (class, readonly, nonatomic) OSADiagnosticMonitorClient *sharedClient;

- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 forTypes:(id)a1;
- (id)q_shimWrappingObserver:(id)a0 creatingIfAbsent:(BOOL)a1 removingIfPresent:(BOOL)a2;

@end
