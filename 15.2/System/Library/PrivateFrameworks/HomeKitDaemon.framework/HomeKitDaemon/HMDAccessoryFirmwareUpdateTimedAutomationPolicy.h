@class HMFTimer, NSString;

@interface HMDAccessoryFirmwareUpdateTimedAutomationPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFTimerDelegate>

@property (retain, nonatomic) HMFTimer *reevaluateTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)timerDidFire:(id)a0;
- (BOOL)status;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)evaluate;
- (void)_startReevaluateTimer:(double)a0;
- (void)_stopReevaluateTimer;
- (id)_getMaxUpdateApplyEndTime;
- (id)_getTriggerFireDateBeforeEndTime:(id)a0;

@end
