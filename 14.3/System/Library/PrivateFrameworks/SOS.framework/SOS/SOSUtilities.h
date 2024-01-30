@class NSString, NSNumber;

@interface SOSUtilities : NSObject

@property (class, readonly, nonatomic) BOOL isDeviceD2xOrNewer;
@property (class, nonatomic) long long mostRecentlyUsedSOSTriggerMechanism;
@property (class, readonly, nonatomic) NSString *phoneTriggerAnimationFooterDescription;
@property (class, readonly, nonatomic) NSString *watchTriggerAnimationFooterDescription;
@property (class, readonly, nonatomic) NSString *callWithSideButtonTitleDescription;
@property (class, readonly, nonatomic) NSString *callWithSideButtonFooterDescription;
@property (class, readonly, nonatomic) NSString *emergencyContactsSectionDescription;
@property (class, readonly, nonatomic) NSString *emergencyContactsEditDescription;
@property (class, readonly, nonatomic) NSString *emergencyContactsFooterDescription;
@property (class, readonly, nonatomic) NSString *emergencyContactsFooterLinkTitle;
@property (class, readonly, nonatomic) NSString *autoCallTitleDescription;
@property (class, readonly, nonatomic) NSString *autoCallFooterDescription;
@property (class, readonly, nonatomic) NSString *countdownSoundTitleDescription;
@property (class, readonly, nonatomic) NSString *countdownSoundFooterDescription;
@property (class, readonly, nonatomic) NSString *automaticDialingSectionDescription;
@property (class, readonly, nonatomic) NSString *holdSideButtonTitleDescription;
@property (class, readonly, nonatomic) NSString *holdSideButtonFooterDescription;
@property (class, readonly, nonatomic) NSString *fallDetectionTitleDescription;
@property (class, readonly, nonatomic) NSString *fallDetectionFooterDescription;
@property (class, readonly, nonatomic) BOOL isActivePairedDeviceTinker;
@property (class, nonatomic, getter=isAutomaticCallCountdownEnabled) BOOL automaticCallCountdownEnabled;
@property (class, nonatomic, getter=shouldPlayAudioDuringCountdown) BOOL playAudioDuringCountdown;
@property (class, readonly, nonatomic) BOOL canTriggerSOSWithSideButton;
@property (class, readonly, nonatomic) long long currentSOSTriggerMechanism;
@property (class, readonly, nonatomic) long long SOSTriggerClickCount;
@property (class, readonly, nonatomic) BOOL supportsSOSWithSideButtonSelectableNumberOfClicks;
@property (class, nonatomic) BOOL longPressTriggersEmergencySOS;
@property (class, retain, nonatomic) NSNumber *newtonTriggersEmergencySOSNumber;
@property (class, nonatomic) BOOL newtonTriggersEmergencySOS;
@property (class, nonatomic, getter=isAllowedToMessageSOSContacts) BOOL allowedToMessageSOSContacts;

+ (BOOL)isSmallScreen;
+ (BOOL)deviceHasHomeButton;
+ (BOOL)canTriggerSOSWithVolumeLockHold;
+ (id)_userFriendsDomainAccessor;
+ (id)_SOSDomainAccessor;
+ (id)phoneAssetName;
+ (long long)SOSSelectableTriggerMechanismCapability;
+ (id)watchAssetNameWithCrownOrientationOnRightSide:(BOOL)a0 layoutLeftToRight:(BOOL)a1;
+ (id)_userSOSDefaults;
+ (BOOL)isIndiaSKU;
+ (BOOL)mustAllowThreeClickTrigger;
+ (BOOL)_hasAccessibilityConflict;
+ (void)setCurrentSOSTriggerMechanism:(long long)a0;
+ (long long)SOSTriggerMechanismForClickCount:(long long)a0;
+ (long long)defaultSOSTriggerMechanism;
+ (BOOL)autoCallRequiresSIM;
+ (BOOL)hasActiveSIMForClient:(id)a0;
+ (BOOL)hasEmergencyContacts;
+ (void)setNewtonTriggersEmergencySOS:(BOOL)a0 isWristDetectionEnabled:(BOOL)a1 doesNewtonRequireConfirmation:(BOOL)a2 presentConfirmationOnViewController:(id)a3 completion:(id /* block */)a4;
+ (void)getAssetViewForPhoneWithCompletion:(id /* block */)a0;
+ (id)getAssetViewForWatchWithCrownOrientationOnRightSide:(BOOL)a0 layoutLeftToRight:(BOOL)a1 tintColor:(id)a2;
+ (void)setCanTriggerSOSWithSideButton:(BOOL)a0 presentErrorAlertOnViewController:(id)a1 completion:(id /* block */)a2;
+ (BOOL)shouldForceDisableAutoCallForClient:(id)a0;
+ (void)openEmergencyContactsFooterLinkOnViewController:(id)a0;

@end
