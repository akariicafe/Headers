@interface PXMemoriesRelatedSettings : PXSettings

@property (nonatomic) BOOL enableFeedbackUI;
@property (nonatomic) BOOL enableFeedbackComboUI;
@property (nonatomic) BOOL enableMemoriesLivingOnFeedback;
@property (nonatomic) BOOL enableManualRefreshUI;
@property (nonatomic) BOOL fakePeopleProximity;
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

+ (id)sharedInstance;
+ (id)schedulerOptionsFromTimelineSchedulerMode:(unsigned long long)a0;
+ (void)_generateQuestionsWithOptions:(long long)a0 count:(unsigned long long)a1 inModuleController:(id)a2;
+ (void)_presentAlertWithTitle:(id)a0 andMessage:(id)a1 inModuleController:(id)a2;
+ (id)settingsControllerModule;
+ (void)_presentAlertForMemoriesGenerationResult:(id)a0 error:(id)a1 inModuleController:(id)a2;

- (id)parentSettings;
- (void)setDefaultValues;
- (void)performPostSaveActions;

@end
