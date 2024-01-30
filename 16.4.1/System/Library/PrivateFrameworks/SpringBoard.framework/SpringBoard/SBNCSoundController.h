@class SBLockStateAggregator, NSMutableDictionary, NSMutableSet, SBLockScreenManager;

@interface SBNCSoundController : NSObject

@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBLockStateAggregator *lockStateAggregator;
@property (retain, nonatomic) NSMutableDictionary *playingSounds;
@property (retain, nonatomic) NSMutableSet *requestsRequiringExplicitKill;

- (BOOL)_isDeviceUILocked;
- (BOOL)canPlaySoundForNotificationRequest:(id)a0;
- (void)_killSounds;
- (void)_hardwareButtonPressed:(id)a0;
- (void)stopSoundForNotificationRequest:(id)a0;
- (void)_lockStateChanged:(id)a0;
- (void)playSoundIfPossibleForNotificationRequest:(id)a0 presentingDestination:(id)a1;
- (void)playSoundForNotificationRequest:(id)a0 presentingDestination:(id)a1;
- (id)init;
- (id)initWithLockScreenManager:(id)a0 lockStateAggregator:(id)a1;
- (void).cxx_destruct;

@end
