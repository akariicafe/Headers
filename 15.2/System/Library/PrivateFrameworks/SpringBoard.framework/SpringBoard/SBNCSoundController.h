@class SBLockStateAggregator, NSMutableDictionary, NSMutableSet, SBLockScreenManager;

@interface SBNCSoundController : NSObject

@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBLockStateAggregator *lockStateAggregator;
@property (retain, nonatomic) NSMutableDictionary *playingSounds;
@property (retain, nonatomic) NSMutableSet *requestsRequiringExplicitKill;

- (void)_lockStateChanged:(id)a0;
- (BOOL)canPlaySoundForNotificationRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_isDeviceUILocked;
- (void)_hardwareButtonPressed:(id)a0;
- (void)playSoundForNotificationRequest:(id)a0 presentingDestination:(id)a1;
- (id)initWithLockScreenManager:(id)a0 lockStateAggregator:(id)a1;
- (void)stopSoundForNotificationRequest:(id)a0;
- (void)_killSounds;
- (void)playSoundIfPossibleForNotificationRequest:(id)a0 presentingDestination:(id)a1;

@end
