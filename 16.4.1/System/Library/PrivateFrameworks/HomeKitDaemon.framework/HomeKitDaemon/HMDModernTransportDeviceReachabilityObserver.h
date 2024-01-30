@class HMFTimer, NSString, NSMapTable, NSMutableArray;
@protocol HMDTimerProvider, HMDDateProvider;

@interface HMDModernTransportDeviceReachabilityObserver : HMFObject <HMFTimerDelegate, HMDRemoteMessageTransportReachabilityDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_deviceToListenersMap;
    NSMutableArray *_devicesWithPendingUnreachability;
    id<HMDTimerProvider> _timerProvider;
    id<HMDDateProvider> _dateProvider;
    HMFTimer *_debounceTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_clearUnreachablePendingForContext:(id)a0;
- (void)_evaluateDebounceTimer;
- (void)_notifyListeners:(id)a0 address:(id)a1 isReachable:(BOOL)a2;
- (void)_serviceExpiredUnreachableDevices;
- (void)_setUnreachablePendingForContext:(id)a0;
- (void)addListener:(id)a0 forDeviceAddress:(id)a1;
- (id)initWithTimerProvider:(id)a0 dateProvider:(id)a1;
- (id)isDeviceAddressReachable:(id)a0;
- (void)removeListener:(id)a0 forDeviceAddress:(id)a1;
- (void)transport:(id)a0 idsIdentifier:(id)a1 didAppearReachable:(BOOL)a2;

@end
