@class SiriContextOverride, SASSystemState;

@interface SASOverriddenSystemState : SASSystemState

@property (retain, nonatomic) SASSystemState *systemState;
@property (retain, nonatomic) SiriContextOverride *contextOverride;

- (BOOL)hasUnlockedSinceBoot;
- (BOOL)isPad;
- (BOOL)deviceIsPasscodeLocked;
- (id)lockStateMonitor;
- (BOOL)carDNDActive;
- (BOOL)smartCoverClosed;
- (BOOL)isConnectedToTrustedCarPlay;
- (BOOL)siriIsSupported;
- (void).cxx_destruct;
- (BOOL)siriIsRestricted;
- (BOOL)isConnectedToCarPlay;
- (void)setLockStateMonitor:(id)a0;
- (BOOL)siriIsEnabled;
- (BOOL)pocketStateShouldPreventVoiceTrigger;
- (BOOL)accessibilityShortcutEnabled;
- (id)initWithSystemState:(id)a0 contextOverride:(id)a1;
- (id)currentSpokenLanguageCode;
- (BOOL)deviceIsBlocked;

@end
