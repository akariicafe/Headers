@class SBLockStateAggregator, NSMutableDictionary, NSMutableSet, DNDEventBehaviorResolutionService, SBLockScreenManager;

@interface SBNCSoundController : NSObject

@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBLockStateAggregator *lockStateAggregator;
@property (retain, nonatomic) NSMutableDictionary *playingSounds;
@property (retain, nonatomic) NSMutableSet *requestsRequiringExplicitKill;
@property (retain, nonatomic) DNDEventBehaviorResolutionService *dndEventBehaviorResolutionService;

- (void)stopSoundForNotificationRequest:(id)a0;
- (BOOL)canPlaySoundForNotificationRequest:(id)a0;
- (void)_killSounds;
- (id)init;
- (void)playSoundForNotificationRequest:(id)a0 presentingDestination:(id)a1;
- (void).cxx_destruct;
- (void)playSoundIfPossibleForNotificationRequest:(id)a0 presentingDestination:(id)a1;
- (BOOL)_isDeviceUILocked;
- (void)_lockStateChanged:(id)a0;
- (id)initWithLockScreenManager:(id)a0 lockStateAggregator:(id)a1;
- (void)_hardwareButtonPressed:(id)a0;

@end
