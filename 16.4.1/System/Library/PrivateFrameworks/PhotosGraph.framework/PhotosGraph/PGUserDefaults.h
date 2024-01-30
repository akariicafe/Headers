@class NSDictionary;

@interface PGUserDefaults : NSObject

@property (class, readonly) BOOL isShowingHolidayCalendarEvents;
@property (class, readonly) BOOL isAlwaysShowingHolidayCalendarEvents;
@property (class, readonly) BOOL isMemoriesNotificationDisabled;
@property (class, readonly) BOOL isAutonamingDisabled;
@property (class, readonly) BOOL isAutonamingSignalPropertiesIngestAllowed;
@property (class, readonly) BOOL isAutonamingFilteredOutInferencesIngestAllowed;
@property (class, readonly) BOOL isRelationshipInferenceDisabled;
@property (class, readonly) BOOL isRelationshipSignalPropertiesIngestAllowed;
@property (class, readonly) BOOL isRelationshipFilteredOutInferencesIngestAllowed;
@property (class, readonly) unsigned long long minimumNumberOfCuratedAssetsForInterestingMoments;
@property (class, readonly) BOOL isMemoriesLivingOnFeedbackEnabled;
@property (class, readonly) unsigned long long maximumNumberOfFacesPerAssetForSingleFocusedPersonFacedAssets;
@property (class, readonly) double minimumRatioOfFocusedPersonFacesPerAssetForMultipleFocusedPersonsFacedAssets;
@property (class, readonly) BOOL boundTextFeaturesPerEvent;
@property (class, readonly) unsigned long long maximumNumberOfTextFeaturesPerEvent;
@property (class, readonly) BOOL isPublicEventsEnabled;
@property (class, readonly) BOOL isMemoryElectionDisabled;
@property (class, readonly) BOOL suppressGraphLiveUpdate;
@property (class, readonly) BOOL peopleSuggestionLearningIsEnabled;
@property (class, readonly) BOOL onThisDayHighlightKeyAssetRotationIsEnabled;
@property (class, readonly) BOOL isBehavioralCurationEnabled;
@property (class, readonly) BOOL isPhotosChallengeEnabled;
@property (class, retain) NSDictionary *extendedCurationOptions;
@property (class, readonly) unsigned long long maximumNumberOfVisibleRegularItems;
@property (class, readonly) unsigned long long maximumNumberOfVisibleItems;
@property (class, readonly) unsigned long long minimumNumberOfVisibleItems;
@property (class, readonly) BOOL useExtendedCurationAssetCountForLocationTitles;
@property (class, readonly) BOOL musicCurationShouldUseOldStylePreviewURL;
@property (class, readonly) BOOL musicCurationAllowAllForExport;
@property (class, readonly) BOOL musicCurationAllowExplicitMusicContent;
@property (class, readonly) BOOL shouldDisableContentClassificationTask;

+ (void)initialize;
+ (void)_registerDefaults;

@end
