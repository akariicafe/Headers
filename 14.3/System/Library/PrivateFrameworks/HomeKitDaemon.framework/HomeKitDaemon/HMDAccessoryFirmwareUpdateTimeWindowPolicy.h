@class HMDAccessoryFirmwareUpdateTimeWindow, HMFTimer, NSString;

@interface HMDAccessoryFirmwareUpdateTimeWindowPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFLogging, HMFTimerDelegate, NSCopying>

@property (readonly, nonatomic) HMDAccessoryFirmwareUpdateTimeWindow *updateTimeWindow;
@property (retain, nonatomic) HMFTimer *reevaluateTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)evaluate;
- (void)timerDidFire:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_stopReevaluateTimer;
- (void)_startReevaluateTimer:(id)a0;
- (id)initWithTimeWindow:(id)a0 workQueue:(id)a1;

@end
