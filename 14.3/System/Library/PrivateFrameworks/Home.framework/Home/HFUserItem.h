@class HMUser, NSUUID, NSString, HMHome, NSSet, NSMutableDictionary, HFHomeKitSettingsValueManager, HMSettings, HFUserNameFormatter, HFHomeKitSettingsAdapterManager;
@protocol HFHomeKitObject;

@interface HFUserItem : HFItem <HFHomeKitItemProtocol, HFHomeKitSettingsVendor, NSCopying>

@property (class, retain, nonatomic) NSMutableDictionary *_fakeHMSettings;

@property (readonly, nonatomic) HFUserNameFormatter *userNameFormatter;
@property (retain, nonatomic) HMHome *hf_home;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMUser *user;
@property (readonly, nonatomic) unsigned long long nameStyle;
@property (readonly, nonatomic) BOOL isItemGroup;
@property (readonly, nonatomic) BOOL isContainedWithinItemGroup;
@property (readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
@property (readonly, nonatomic) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property (readonly, nonatomic) HFHomeKitSettingsValueManager *hf_settingsValueManager;
@property (readonly, nonatomic) BOOL hasValidSettings;
@property (readonly) HMSettings *settings;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0 user:(id)a1 nameStyle:(unsigned long long)a2;
- (id)_privateSettings;
- (BOOL)isAnnounceEnabled;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)_privateSettingsValueManager;
- (BOOL)_hasValidPrivateSettings;
- (BOOL)_getFakeBoolSettingsValueForKeyPath:(id)a0 defaultValue:(BOOL)a1;
- (id)_getSettingsValueForKeyPath:(id)a0 defaultValue:(id)a1 settingsType:(unsigned long long)a2 block:(id /* block */)a3;
- (void)_setFakeBoolSettingsValueForKeyPath:(id)a0 newValue:(BOOL)a1;
- (id)_setSettingsValueForKeyPath:(id)a0 settingsType:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (BOOL)_getBoolSettingsValueForKeyPath:(id)a0 defaultValue:(BOOL)a1 settingsType:(unsigned long long)a2;
- (id)_setBoolSettingsValueForKeyPath:(id)a0 newValue:(BOOL)a1 settingsType:(unsigned long long)a2;
- (BOOL)_isSettingsValueForKeyPath:(id)a0 atMaximumValue:(long long)a1 settingsType:(unsigned long long)a2;
- (id)_incrementSettingsValueForKeyPath:(id)a0 stepValue:(long long)a1 maximumValue:(long long)a2 settingsType:(unsigned long long)a3;
- (BOOL)hasDismissedVoiceProfileOnboarding;
- (id)setDismissIdentifyVoiceOnboarding:(BOOL)a0;
- (BOOL)hasDismissedIdentifyVoiceReminderBanner;
- (id)setDismissIdentifyVoiceReminderBanner:(BOOL)a0;
- (BOOL)hasDismissedAnnounceOnboarding;
- (id)setDismissAnnounceOnboarding:(BOOL)a0;
- (BOOL)hasDismissedHomeTheaterOnboarding;
- (id)setDismissHomeTheaterOnboarding:(BOOL)a0;
- (BOOL)hasDismissedTVViewingProfilesOnboarding;
- (id)setDismissTVViewingProfilesOnboarding:(BOOL)a0;
- (BOOL)hasDismissedTVViewingProfilesReminderBanner;
- (id)setDismissTVViewingProfilesReminderBanner:(BOOL)a0;
- (BOOL)hasDismissedNaturalLightingOnboarding;
- (id)setDismissNaturalLightingOnboarding:(BOOL)a0;
- (BOOL)hasDismissedCameraRecordingOnboarding;
- (id)setDismissCameraRecordingOnboarding:(BOOL)a0;
- (BOOL)hasDismissedCameraRecordingReminderBanner;
- (id)setDismissCameraRecordingReminderBanner:(BOOL)a0;
- (id)setEnableIdentifyVoice:(BOOL)a0;
- (BOOL)isIdentifyVoiceEnabled;
- (id)setPlaybackInfluencesForYou:(BOOL)a0;
- (BOOL)isPlaybackInfluencesForYouEnabled;
- (id)setAllowiTunesAccount:(BOOL)a0;
- (BOOL)isAllowiTunesAccountEnabled;
- (id)setDismissUserSplitMediaAccountWarning:(BOOL)a0;
- (BOOL)hasDismissedUserSplitMediaAccountWarning;
- (id)setCompletedNonOwnerUserHomeSwitchingUI:(BOOL)a0;
- (BOOL)hasCompletedNonOwnerUserHomeSwitchingUI;
- (BOOL)hasDismissedWelcomeUIBanner;
- (id)setDismissedWelcomeUIBanner:(BOOL)a0;
- (id)setEnableAnnounce:(BOOL)a0;
- (BOOL)shouldHideAddSceneButton;
- (id)incrementAddSceneButtonPresentedCount;

@end
