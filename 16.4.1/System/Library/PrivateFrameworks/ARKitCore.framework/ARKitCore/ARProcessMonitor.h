@class NSMutableDictionary, RBSProcessMonitor;
@protocol ARProcessMonitorStateChangeDelegate;

@interface ARProcessMonitor : NSObject {
    RBSProcessMonitor *_processMonitor;
    NSMutableDictionary *_pidsToObserve;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pidsLock;
}

@property (weak, nonatomic) id<ARProcessMonitorStateChangeDelegate> delegate;

+ (BOOL)processIsDaemon:(int)a0 error:(out id *)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handleStateUpdate:(id)a0;
- (void)startMonitoringPID:(int)a0;
- (void)stopMonitoringPID:(int)a0;
- (void)updateProcessMonitorConfig:(id)a0 withPredicates:(id)a1;

@end
