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

- (void)_didReceiveMemoryWarning;
- (BOOL)connectedToPowerSource;
- (void)close;
- (void)_resetReachability;
- (void)_invalidateProcessMonitorObject:(id)a0;
- (void)removeLowMemoryObserver:(id)a0;
- (void)_resetPowerManager;
- (void)__resetReachability;
- (void)_initProcessObservers;
- (void)_initXPCFSEvents;
- (void)_invalidateProcessObservers;
- (void)_invalidateReachability;
- (void)removePowerObserver:(id)a0;
- (void)_setPowerLevelWithCoalescing:(BOOL)a0;
- (void)_resetLowDiskManager;
- (void)removeLowDiskObserver:(id)a0 forDevice:(int)a1;
- (void)_initAppListObservers;
- (void)addReachabilityObserver:(id)a0;
- (void)_initLowMemory;
- (void)_invalidateLowMemory;
- (void)removeProcessMonitor:(id)a0;
- (void)_processLowDiskNotification:(BOOL)a0;
- (void)_invalidateAppListObservers;
- (void).cxx_destruct;
- (void)_setReachabilityFlags:(unsigned int)a0;
- (void)_invalidatePowerManager;
- (void)_initLowDiskManager;
- (id)init;
- (void)removeAppListObserver:(id)a0;
- (void)_initReachability;
- (void)suspend;
- (void)_setReachabilityFlagsWithCoalescing:(unsigned int)a0;
- (void)addLowMemoryObserver:(id)a0;
- (void)resume;
- (void)reachabilityMonitor:(id)a0 didChangeReachabilityFlagsTo:(unsigned int)a1;
- (void)addLowDiskObserver:(id)a0 forDevice:(int)a1;
- (void)_initPowerManager;
- (void)addPowerObserver:(id)a0;
- (void)_setPowerLevel:(BOOL)a0;
- (void)reachabilityMonitor:(id)a0 didChangeReachabilityStatusTo:(BOOL)a1;
- (void)addAppListObserver:(id)a0;
- (void)dealloc;
- (id)_createMonitoringObjectForProcessID:(int)a0 observer:(id)a1;
- (void)addProcessMonitor:(id)a0 forProcessID:(int)a1;
- (void)reset;
- (void)_invalidateLowDiskManager;
- (void)removeReachabilityObserver:(id)a0;
- (BOOL)hasEnoughSpaceForDevice:(int)a0;

@end
