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

+ (id)lastSystemWakeDate;
+ (double)currentMachTimeInterval;
+ (id)_backgroundUpdateQueue;
+ (void)_updateTime:(double)a0 forGuidancePriority:(unsigned long long)a1;
+ (double)_currentGuidanceTime;

- (void)scheduleInRunLoop:(id)a0;
- (void)scheduleInRunLoop:(id)a0 inMode:(id)a1;
- (id)_initWithAbsoluteTime:(double)a0 serviceIdentifier:(id)a1 guidancePriority:(unsigned long long)a2 target:(id)a3 selector:(SEL)a4 userInfo:(id)a5 triggerOnGMTChange:(BOOL)a6;
- (BOOL)firingIsImminent;
- (void)interfaceManagerInternetReachabilityChanged:(id)a0;
- (BOOL)isValid;
- (double)_nextForcedAlignmentAbsoluteTime;
- (void)scheduleInQueue:(id)a0;
- (void)interfaceManagerWWANInterfaceChangedPowerState:(id)a0;
- (void)dealloc;
- (id)initWithFireDate:(id)a0 serviceIdentifier:(id)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4;
- (void)_updateTimers;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)a0;
- (id)initWithTimeInterval:(double)a0 serviceIdentifier:(id)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4;
- (id)initWithTimeInterval:(double)a0 serviceIdentifier:(id)a1 guidancePriority:(unsigned long long)a2 target:(id)a3 selector:(SEL)a4 userInfo:(id)a5;
- (id)userInfo;
- (void)_fireTimerFired;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (double)_earlyFireTime;

@end
