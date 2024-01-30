@class NSHashTable, NSString, NSDate, NSMutableDictionary, NSMutableSet, NSObject, BRReachabilityMonitor, br_pacer, NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCSystemResourcesManager : NSObject <BRReachabilityObserver> {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    BOOL _invalidated;
    NSHashTable *_reachabilityObservers;
    BRReachabilityMonitor *_reachabilityMonitor;
    unsigned int _reachabilityFlags;
    NSObject<OS_dispatch_source> *_reachabilityFlagsTimer;
    NSHashTable *_powerObservers;
    int _powerNotifyToken;
    BOOL _powerLevelOK;
    NSObject<OS_dispatch_source> *_powerLevelOKTimer;
    BOOL _connectedToPowerSource;
    NSDate *_connectedToPowerSourceCheckedDate;
    NSMutableSet *_lowDiskSet;
    NSMutableDictionary *_lowDiskDict;
    NSObject<OS_dispatch_source> *_lowDiskSource;
    NSObject<OS_dispatch_source> *_lowDiskTimer;
    NSHashTable *_lowMemoryObservers;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    br_pacer *_memoryNotificationCoalescePacer;
    NSMapTable *_processObservers;
    NSHashTable *_appListObservers;
}

@property (readonly) BOOL isNetworkReachable;
@property (readonly) unsigned int reachabilityFlags;
@property (readonly) BOOL isPowerOK;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)manager;

- (void)_resetLowDiskManager;
- (void)addReachabilityObserver:(id)a0;
- (void)removeReachabilityObserver:(id)a0;
- (void)addLowMemoryObserver:(id)a0;
- (void)_invalidateLowMemory;
- (void)removeProcessMonitor:(id)a0;
- (id)init;
- (void)_invalidateProcessObservers;
- (void)close;
- (void)removeLowMemoryObserver:(id)a0;
- (void).cxx_destruct;
- (void)_invalidateProcessMonitorObject:(id)a0;
- (void)addPowerObserver:(id)a0;
- (void)_initPowerManager;
- (void)reachabilityMonitor:(id)a0 didChangeReachabilityStatusTo:(BOOL)a1;
- (void)reset;
- (void)_resetReachability;
- (void)addProcessMonitor:(id)a0 forProcessID:(int)a1;
- (void)dealloc;
- (void)_invalidatePowerManager;
- (void)reachabilityMonitor:(id)a0 didChangeReachabilityFlagsTo:(unsigned int)a1;
- (void)_initProcessObservers;
- (void)_initLowMemory;
- (void)_processLowDiskNotification:(BOOL)a0;
- (void)__resetReachability;
- (void)_initAppListObservers;
- (void)_invalidateAppListObservers;
- (void)addLowDiskObserver:(id)a0 forDevice:(int)a1;
- (void)_initLowDiskManager;
- (void)addAppListObserver:(id)a0;
- (void)_setReachabilityFlags:(unsigned int)a0;
- (BOOL)hasEnoughSpaceForDevice:(int)a0;
- (void)removeAppListObserver:(id)a0;
- (void)resume;
- (void)_setPowerLevel:(BOOL)a0;
- (void)_invalidateLowDiskManager;
- (BOOL)connectedToPowerSource;
- (void)_invalidateReachability;
- (void)_resetPowerManager;
- (void)_setPowerLevelWithCoalescing:(BOOL)a0;
- (void)removeLowDiskObserver:(id)a0 forDevice:(int)a1;
- (void)_initReachability;
- (void)suspend;
- (id)_createMonitoringObjectForProcessID:(int)a0 observer:(id)a1;
- (void)_initXPCFSEvents;
- (void)_didReceiveMemoryWarning;
- (void)removePowerObserver:(id)a0;
- (void)_setReachabilityFlagsWithCoalescing:(unsigned int)a0;

@end
