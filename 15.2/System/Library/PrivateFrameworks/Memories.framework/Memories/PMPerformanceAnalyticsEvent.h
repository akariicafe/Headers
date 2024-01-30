@class NSString;

@interface PMPerformanceAnalyticsEvent : PMCoreAnalyticsEvent <CoreAnalyticsEventProtocol>

@property (nonatomic) long long assetDownloadStage;
@property (nonatomic) long long compositionStage;
@property (copy, nonatomic) NSString *creationType;
@property (nonatomic) long long musicSelectionStage;
@property (nonatomic) long long nonLocalAssetCount;
@property (nonatomic) long long downloadErrorCount;
@property (nonatomic) long long numberOfAssets;
@property (nonatomic) long long picklistStage;
@property (nonatomic) BOOL playHasStarted;
@property (nonatomic) long long polishStage;
@property (nonatomic) long long projectCreationStage;
@property (nonatomic) long long songDownloadStage;
@property (nonatomic) long long stabilizationStage;
@property (nonatomic) long long totalMovieCreationTime;
@property (nonatomic) long long trimStage;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *duration;
@property (copy, nonatomic) NSString *deviceFreeSpace;
@property (nonatomic) long long numberOfItemsInEditList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventPayload;
- (void).cxx_destruct;
- (id)init;
- (id)eventName;
- (id)copy;
- (id)eventBySettingCreationType:(id)a0;
- (id)eventBySettingType:(id)a0;
- (id)eventBySettingProjectCreationStage:(long long)a0;
- (id)eventBySettingTotalMovieCreationTime:(long long)a0;
- (id)eventBySettingDuration:(id)a0;
- (id)eventBySettingPolishStage:(long long)a0;
- (id)eventBySettingTrimStage:(long long)a0;
- (id)eventBySettingMusicSelectionStage:(long long)a0;
- (id)eventBySettingSongDownloadStage:(long long)a0;
- (id)eventBySettingPicklistStage:(long long)a0;
- (id)eventBySettingNumberOfAssets:(long long)a0;
- (id)eventBySettingPlayHasStarted:(BOOL)a0;
- (id)eventBySettingCompositionStage:(long long)a0;
- (id)eventBySettingStabilizationStage:(long long)a0;
- (id)eventBySettingNumberOfItemsInEditList:(long long)a0;
- (id)eventBySettingAssetDownloadStage:(long long)a0;
- (id)eventBySettingNonLocalAssetCount:(long long)a0;
- (id)eventBySettingDownloadErrorCount:(long long)a0;

@end
