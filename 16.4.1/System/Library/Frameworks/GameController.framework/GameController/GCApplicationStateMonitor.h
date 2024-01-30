@class NSString, BKSApplicationStateMonitor, NSMapTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GCApplicationStateMonitor : NSObject <GCFrontmostApplicationObserverDelegate> {
    BKSApplicationStateMonitor *_bksStateMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_pidToObservers;
    NSMapTable *_observerToPIDs;
    NSMutableDictionary *_pidToBundleIdentifier;
    NSMutableDictionary *_pidToCanReceiveEvents;
}

@property (nonatomic) int frontmostApplication;
@property (retain, nonatomic) NSString *frontmostApplicationIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)removeObserver:(id)a0 forProcessIdentifier:(int)a1;
- (void)removeApplicationFromCanReceiveEventsMonitoring:(int)a0;
- (void)initializeStateMonitor;
- (BOOL)applicationCanReceiveEvents:(int)a0;
- (void)setApplicationCanReceiveEvents:(BOOL)a0 forPID:(int)a1;
- (void)addObserver:(id)a0 forProcessIdentifier:(int)a1;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)onFrontmostApplicationChanged:(int)a0;
- (void)updateInterestedBundleIDs;
- (id)init;
- (void)initializeForegroundMonitor;
- (void).cxx_destruct;

@end
