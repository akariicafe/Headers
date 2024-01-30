@class NSString, NSDictionary, FCMTWriterLock, NSDate, NSNumber, FCTagSettings;

@interface FCUserInfo : FCPrivateDataController <FCTagSettingsDelegate>

@property (class, readonly, nonatomic) unsigned long long progressivePersonalization;

@property (retain, nonatomic) NSDictionary *readOnlyUserInfo;
@property (retain, nonatomic) FCMTWriterLock *userInfoLock;
@property (copy, nonatomic) NSNumber *onboardingVersionNumber;
@property (copy, nonatomic) NSString *feldsparID;
@property (readonly, copy, nonatomic) NSString *notificationsUserID;
@property (copy, nonatomic) NSString *adsUserID;
@property (copy, nonatomic) NSDate *dateLastOpened;
@property (retain, nonatomic) FCTagSettings *tagSettings;
@property (copy, nonatomic) NSDate *userStartDate;
@property (readonly, nonatomic) BOOL useParsecResults;
@property (readonly, nonatomic) BOOL shouldShowDefaultForYou;
@property (readonly, nonatomic) unsigned long long progressivePersonalization;
@property (nonatomic) BOOL hasShownProgressivePersonalizationWelcomeBrick;
@property (nonatomic) BOOL userHasCompletedFavoritesSetup;
@property (copy, nonatomic) NSDate *newsletterSignupLastSeenDate;
@property (copy, nonatomic) NSDate *personalizedNewsletterSignupLastSeenDate;
@property (copy, nonatomic) NSString *editorialArticleVersion;
@property (copy, nonatomic) NSString *canonicalLanguage;
@property (nonatomic) BOOL marketingNotificationsEnabled;
@property (nonatomic) BOOL newIssueNotificationsEnabled;
@property (nonatomic) BOOL endOfAudioTrackNotificationsEnabled;
@property (copy, nonatomic) NSNumber *monthlyALaCarteSubscriptionMeteredCount;
@property (copy, nonatomic) NSDate *aLaCarteSubscriptionMeteredCountLastResetDate;
@property (copy, nonatomic) NSNumber *monthlyBundleSubscriptionMeteredCount;
@property (copy, nonatomic) NSDate *bundleSubscriptionMeteredCountLastResetDate;
@property (copy, nonatomic) NSNumber *upsellAppLaunchCount;
@property (copy, nonatomic) NSString *lastAppLaunchUpsellInstanceID;
@property (copy, nonatomic) NSDate *appLaunchUpsellLastSeenDate;
@property (readonly, nonatomic) BOOL mightNeedToUpdateOnboardingVersion;
@property (readonly, nonatomic) NSDate *dateLastViewedSaved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)desiredKeys;
+ (id)backingRecordZoneIDs;
+ (id)localStoreFilename;
+ (BOOL)requiresPushNotificationSupport;
+ (id)commandStoreFileName;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)overrideFeldsparID;
+ (id)userInfoCKRecordFromUserInfoDictionary:(id)a0;
+ (id)commandsToMergeLocalDataToCloud:(id)a0;
+ (id)iCloudDataKeys;
+ (unsigned long long)localStoreVersion;
+ (id)backingRecordIDs;
+ (long long)commandQueueUrgency;
+ (BOOL)requiresBatchedSync;

- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)asCKRecord;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)addObserver:(id)a0;
- (void)prepareForUse;
- (void)_setUserInfoValue:(id)a0 forKey:(id)a1;
- (id)_userInfoValueForKey:(id)a0;
- (void)handleSyncWithUserInfoRecord:(id)a0;
- (void)handleSyncWithDeletedUserInfoRecord;
- (void)_modifyUserInfoWithBlock:(id /* block */)a0;
- (void)syncLocalNotificationsUserID:(id)a0 withRemoteNotificationsUserID:(id)a1;
- (void)_persistAdsUserID:(id)a0;
- (void)syncLocalAdsUserID:(id)a0 withRemoteAdsUserID:(id)a1;
- (void)_persistNotificationsUserID:(id)a0;
- (void)addModifyTagSettingsCommandToCommandQueue:(id)a0;
- (void)accessTokenDidChangeForTagID:(id)a0;
- (void)accessTokenRemovedForTagID:(id)a0 userInitiated:(BOOL)a1;
- (void)markSavedAsViewed;
- (void)syncWithCompletion:(id /* block */)a0;
- (void)refreshOnboardingVersion:(id /* block */)a0;
- (void)updateOnboardingVersion;
- (void)maybeUpdateOnboardingVersion:(id /* block */)a0;
- (void)loadLocalCachesFromStore;

@end
