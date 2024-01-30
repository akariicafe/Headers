@class BKSApplicationStateMonitor;

@interface GKApplicationStateMonitor : NSObject

@property (retain, nonatomic) BKSApplicationStateMonitor *applicationStateMonitor;
@property (copy, nonatomic) id /* block */ handler;

- (id)init;
- (void)dealloc;
- (BOOL)observingStateChangesForBundleID:(id)a0;
- (void)startObservingStateChangesForBundleID:(id)a0;

@end
