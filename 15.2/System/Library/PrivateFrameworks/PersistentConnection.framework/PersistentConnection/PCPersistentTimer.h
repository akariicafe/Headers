@class NSString, PCSimpleTimer, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface PCPersistentTimer : NSObject <CUTPowerMonitorDelegate> {
    double _fireTime;
    double _startTime;
    unsigned long long _guidancePriority;
    BOOL _triggerOnGMTChange;
    BOOL _userVisible;
    NSString *_serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    PCSimpleTimer *_simpleTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_logObject;
}

@property (nonatomic) double minimumEarlyFireProportion;
@property (nonatomic) double earlyFireConstantInterval;
@property (nonatomic) BOOL disableSystemWaking;
@property (nonatomic, getter=isUserVisible) BOOL userVisible;
@property (readonly, nonatomic) double fireTime;
@property (readonly, nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_backgroundUpdateQueue;
+ (double)_currentGuidanceTime;
+ (void)_updateTime:(double)a0 forGuidancePriority:(unsigned long long)a1;
+ (id)lastSystemWakeDate;
+ (double)currentMachTimeInterval;

- (void)scheduleInRunLoop:(id)a0;
- (void)interfaceManagerInternetReachabilityChanged:(id)a0;
- (id)userInfo;
- (id)_initWithAbsoluteTime:(double)a0 serviceIdentifier:(id)a1 guidancePriority:(unsigned long long)a2 target:(id)a3 selector:(SEL)a4 userInfo:(id)a5 triggerOnGMTChange:(BOOL)a6;
- (void)_updateTimers;
- (void)scheduleInRunLoop:(id)a0 inMode:(id)a1;
- (void).cxx_destruct;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)a0;
- (void)interfaceManagerWWANInterfaceChangedPowerState:(id)a0;
- (BOOL)firingIsImminent;
- (void)invalidate;
- (id)initWithTimeInterval:(double)a0 serviceIdentifier:(id)a1 guidancePriority:(unsigned long long)a2 target:(id)a3 selector:(SEL)a4 userInfo:(id)a5;
- (void)scheduleInQueue:(id)a0;
- (void)dealloc;
- (double)_nextForcedAlignmentAbsoluteTime;
- (void)_fireTimerFired;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)a0;
- (id)initWithFireDate:(id)a0 serviceIdentifier:(id)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4;
- (double)_earlyFireTime;
- (BOOL)isValid;
- (id)initWithTimeInterval:(double)a0 serviceIdentifier:(id)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4;

@end
