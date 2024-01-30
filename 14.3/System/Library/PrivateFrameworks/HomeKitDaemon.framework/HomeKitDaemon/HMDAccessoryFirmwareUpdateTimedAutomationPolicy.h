@class HMFTimer, NSString, HMDHAPAccessory;

@interface HMDAccessoryFirmwareUpdateTimedAutomationPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFLogging, HMFTimerDelegate>

@property (readonly, weak) HMDHAPAccessory *accessory;
@property (retain, nonatomic) HMFTimer *reevaluateTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void).cxx_destruct;
- (BOOL)evaluate;
- (void)timerDidFire:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)status;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1;
- (void)_stopReevaluateTimer;
- (void)_startReevaluateTimer:(double)a0;
- (id)_getMaxUpdateApplyEndTime;
- (id)_getTriggerFireDateBeforeEndTime:(id)a0;

@end
