@class NSCountedSet, NSMutableDictionary, NSSet, NSMutableSet, NSObject, RBSProcessMonitor;
@protocol OS_dispatch_queue, FPDProcessMonitorDelegate;

@interface FPDProcessMonitor : NSObject {
    RBSProcessMonitor *_monitor;
    NSMutableDictionary *_bundleIDForPID;
    NSCountedSet *_bundleIDs;
    NSCountedSet *_pids;
    NSMutableSet *_foregroundBundleIDs;
    NSSet *_excludedBundleIDs;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (weak) id<FPDProcessMonitorDelegate> delegate;

- (BOOL)_isProcessForeground:(id)a0;
- (void)_handleProcessStateUpdate:(id)a0;
- (BOOL)isForeground;
- (void)_addPIDToObserve:(int)a0;
- (void)_invalidate;
- (void)process:(int)a0 didBecomeForeground:(BOOL)a1;
- (id)_bundleIDForPID:(int)a0;
- (id)description;
- (void)removePIDToObserve:(int)a0;
- (void).cxx_destruct;
- (void)_stopMonitoringPID:(int)a0;
- (void)_createMonitor;
- (void)invalidate;
- (void)_updateMonitoredBundleIDs;
- (id)initWithExcludedBundleIDs:(id)a0;
- (id)prettyDescription;
- (void)_configureAppMonitor:(id)a0;
- (void)addPIDToObserve:(int)a0;
- (void)_startMonitoringAndSendInitialNotificationForPID:(int)a0;
- (void)_removePIDToObserve:(int)a0;

@end
