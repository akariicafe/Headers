@class HKWristDetectionSettingManager, NSDate, HKSPObserverSet;
@protocol HKSPUserDefaults;

@interface HDSPWatchOnWristMonitor : NSObject <HKWristDetectionSettingManagerObserver>

@property (readonly, nonatomic) HKWristDetectionSettingManager *wristDetectionSettingsManager;
@property (readonly, nonatomic) id<HKSPUserDefaults> userDefaults;
@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) BOOL isOnWrist;
@property (readonly, nonatomic) NSDate *lastOnWristDate;
@property (readonly, nonatomic) BOOL isWristDetectEnabled;

- (void)addObserver:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)initWithUserDefaults:(id)a0;
- (void)removeObserver:(id)a0;
- (void)wristDetectionSettingManagerDidObserveWristDetectChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)_lock_isOnWrist;
- (id)_lock_lastOnWristDate;
- (void)_lock_setIsOnWrist:(BOOL)a0;
- (void)_lock_setLastOnWristDate:(id)a0;
- (id)initWithUserDefaults:(id)a0 callbackScheduler:(id)a1;

@end
