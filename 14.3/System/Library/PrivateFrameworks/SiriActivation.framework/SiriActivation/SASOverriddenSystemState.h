@class SiriContextOverride, SASSystemState;

@interface SASOverriddenSystemState : SASSystemState

@property (retain, nonatomic) SASSystemState *systemState;
@property (retain, nonatomic) SiriContextOverride *contextOverride;

- (void)setLockStateMonitor:(id)a0;
- (id)lockStateMonitor;
- (BOOL)isConnectedToTrustedCarPlay;
- (BOOL)deviceIsPasscodeLocked;
- (BOOL)siriIsRestricted;
- (BOOL)isConnectedToCarPlay;
- (void).cxx_destruct;
- (BOOL)pocketStateShouldPreventVoiceTrigger;
- (id)currentSpokenLanguageCode;
- (BOOL)hasUnlockedSinceBoot;
- (BOOL)accessibilityShortcutEnabled;
- (BOOL)isPad;
- (BOOL)smartCoverClosed;
- (BOOL)carDNDActive;
- (id)initWithSystemState:(id)a0 contextOverride:(id)a1;
- (BOOL)siriIsEnabled;
- (BOOL)siriIsSupported;
- (BOOL)deviceIsBlocked;

@end
