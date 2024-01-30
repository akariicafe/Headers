@class SiriContextOverride, SASSystemState;

@interface SASOverriddenSystemState : SASSystemState

@property (retain, nonatomic) SASSystemState *systemState;
@property (retain, nonatomic) SiriContextOverride *contextOverride;

- (BOOL)siriIsEnabled;
- (BOOL)carDNDActive;
- (BOOL)deviceIsPasscodeLocked;
- (void)setLockStateMonitor:(id)a0;
- (BOOL)hasUnlockedSinceBoot;
- (BOOL)deviceIsBlocked;
- (id)lockStateMonitor;
- (BOOL)siriIsRestricted;
- (BOOL)isPad;
- (BOOL)siriIsSupported;
- (id)initWithSystemState:(id)a0 contextOverride:(id)a1;
- (id)currentSpokenLanguageCode;
- (BOOL)isConnectedToCarPlay;
- (BOOL)smartCoverClosed;
- (BOOL)isConnectedToTrustedCarPlay;
- (BOOL)pocketStateShouldPreventVoiceTrigger;
- (BOOL)accessibilityShortcutEnabled;
- (void).cxx_destruct;

@end
