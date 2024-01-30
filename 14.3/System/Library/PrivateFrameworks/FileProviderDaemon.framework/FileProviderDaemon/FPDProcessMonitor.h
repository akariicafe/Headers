@class NSCountedSet, NSMutableDictionary, BKSApplicationStateMonitor, NSMutableSet, NSSet, NSObject;
@protocol OS_dispatch_queue, FPDProcessMonitorDelegate;

@interface FPDProcessMonitor : NSObject {
    BKSApplicationStateMonitor *_monitor;
    NSMutableDictionary *_bundleIDForPID;
    NSCountedSet *_bundleIDs;
    NSCountedSet *_pids;
    NSMutableSet *_foregroundBundleIDs;
    NSSet *_excludedBundleIDs;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (weak) id<FPDProcessMonitorDelegate> delegate;

- (void).cxx_destruct;
- (void)removePIDToObserve:(int)a0;
- (void)_addPIDToObserve:(int)a0;
- (id)initWithExcludedBundleIDs:(id)a0;
- (void)_handleAppStateChange:(id)a0;
- (BOOL)isForeground;
- (id)prettyDescription;
- (id)description;
- (id)_createAppMonitor;
- (void)process:(int)a0 didBecomeForeground:(BOOL)a1;
- (void)_updateMonitoredBundleIDs;
- (void)_removePIDToObserve:(int)a0;
- (void)addPIDToObserve:(int)a0;
- (void)invalidate;

@end
