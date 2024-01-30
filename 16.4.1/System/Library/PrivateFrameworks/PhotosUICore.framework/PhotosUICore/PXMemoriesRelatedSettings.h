@interface PXMemoriesRelatedSettings : PXSettings

@property (nonatomic) BOOL enableFeedbackUI;
@property (nonatomic) BOOL enableFeedbackComboUI;
@property (nonatomic) BOOL enableMemoriesLivingOnFeedback;
@property (nonatomic) BOOL fakePeopleProximity;
@property (nonatomic) BOOL showEphemeralMemories;
@property (nonatomic) BOOL useOnlyMusicForTopicInTopPickSuggestions;
@property (nonatomic) BOOL includeChillMixInMusicForYou;
@property (nonatomic) BOOL includeGetUpMixInMusicForYou;
@property (nonatomic) double refreshPhotoKitTimeout;
@property (nonatomic) double widgetRefreshTimeInterval;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForInterestingMoments;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForMemories;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForMovieHeader;
@property (nonatomic) unsigned long long deleteBehavior;
@property (nonatomic) BOOL recoverBlacklistedMemories;
@property (nonatomic) BOOL showMemoryTitleLayer;
@property (nonatomic) BOOL enableIPadWideHeader;
@property (nonatomic) long long subtitleFontSize;
@property (nonatomic) unsigned long long timelineSchedulerMode;
@property (nonatomic) BOOL enableDiscoveryFeed;
@property (nonatomic) unsigned long long discoveryRankingMode;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (void)_presentAlertWithTitle:(id)a0 andMessage:(id)a1 inModuleController:(id)a2;
+ (void)_presentAlertForMemoriesGenerationResult:(id)a0 error:(id)a1 inModuleController:(id)a2;
+ (BOOL)isAssetCountAcceptableForMemoryPlayback:(long long)a0;
+ (id)schedulerOptionsFromTimelineSchedulerMode:(unsigned long long)a0;
+ (void)_generateQuestionsWithOptions:(long long)a0 count:(unsigned long long)a1 inModuleController:(id)a2;

- (id)parentSettings;
- (void)performPostSaveActions;
- (void)setDefaultValues;

@end
