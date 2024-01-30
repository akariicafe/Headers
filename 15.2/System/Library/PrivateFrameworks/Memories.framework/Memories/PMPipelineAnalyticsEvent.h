@class NSString;

@interface PMPipelineAnalyticsEvent : PMCoreAnalyticsEvent <CoreAnalyticsEventProtocol>

@property (copy, nonatomic) NSString *songID;
@property (nonatomic) long long moodID;
@property (nonatomic) NSString *durationRequested;
@property (nonatomic) double durationAchieved;
@property (copy, nonatomic) NSString *collectionClass;
@property (nonatomic) long long assetCountRequested;
@property (nonatomic) long long assetCountAchieved;
@property (nonatomic) long long unsuccessfulDownloadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventPayload;
- (void).cxx_destruct;
- (id)init;
- (id)eventName;
- (id)copy;
- (id)eventBySettingSongID:(id)a0;
- (id)eventBySettingMoodID:(long long)a0;
- (id)eventBySettingDurationRequested:(id)a0;
- (id)eventBySettingDurationAchieved:(double)a0;
- (id)eventBySettingCollectionClass:(id)a0;
- (id)eventBySettingAssetCountRequested:(long long)a0;
- (id)eventBySettingAssetCountAchieved:(long long)a0;
- (id)eventBySettingUnsuccessfulDownloadCount:(long long)a0;

@end
