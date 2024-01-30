@class NSString, NSNumber;

@interface SiriContextOverride : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *currentSpokenLanguageCode;
@property (retain, nonatomic) NSNumber *unlockedSinceBoot;
@property (retain, nonatomic) NSNumber *deviceIsBlocked;
@property (retain, nonatomic) NSNumber *deviceIsPasscodeLocked;
@property (retain, nonatomic) NSNumber *pocketStateShouldPreventVoiceTrigger;
@property (retain, nonatomic) NSNumber *pad;
@property (retain, nonatomic) NSNumber *smartCoverClosed;
@property (retain, nonatomic) NSNumber *accessibilityShortcutEnabled;
@property (retain, nonatomic) NSNumber *carDNDActive;
@property (retain, nonatomic) NSNumber *connectedToCarPlay;
@property (retain, nonatomic) NSNumber *connectedToTrustedCarPlay;
@property (retain, nonatomic) NSNumber *siriIsEnabled;
@property (retain, nonatomic) NSNumber *siriIsRestricted;
@property (retain, nonatomic) NSNumber *siriIsSupported;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)currentSpokenLanguageCodeForSystemState:(id)a0;
- (BOOL)hasUnlockedSinceBootForSystemState:(id)a0;
- (BOOL)deviceIsBlockedForSystemState:(id)a0;
- (BOOL)deviceIsPasscodeLockedForSystemState:(id)a0;
- (BOOL)pocketStateShouldPreventVoiceTriggerForSystemState:(id)a0;
- (BOOL)isPadForSystemState:(id)a0;
- (BOOL)smartCoverClosedForSystemState:(id)a0;
- (BOOL)accessibilityShortcutEnabledForSystemState:(id)a0;
- (BOOL)carDNDActiveForSystemState:(id)a0;
- (BOOL)isConnectedToCarPlayForSystemState:(id)a0;
- (BOOL)isConnectedToTrustedCarPlayForSystemState:(id)a0;
- (BOOL)siriIsEnabledForSystemState:(id)a0;
- (BOOL)siriIsRestrictedForSystemState:(id)a0;
- (BOOL)siriIsSupportedForSystemState:(id)a0;
- (void)overrideCurrentSpokenLanguageCode:(id)a0;
- (void)overrideHasUnlockedSinceBoot:(BOOL)a0;
- (void)overrideDeviceIsBlocked:(BOOL)a0;
- (void)overrideDeviceIsPasscodeLocked:(BOOL)a0;
- (void)overridePocketStateShouldPreventVoiceTrigger:(BOOL)a0;
- (void)overrideIsPad:(BOOL)a0;
- (void)overrideSmartCoverClosed:(BOOL)a0;
- (void)overrideAccessibilityShortcutEnabled:(BOOL)a0;
- (void)overrideCarDNDActive:(BOOL)a0;
- (void)overrideConnectedToTrustedCarPlay:(BOOL)a0;
- (void)overrideConnectedToCarPlay:(BOOL)a0;
- (void)overrideSiriIsEnabled:(BOOL)a0;
- (void)overrideSiriIsRestricted:(BOOL)a0;
- (void)overrideSiriIsSupported:(BOOL)a0;

@end
