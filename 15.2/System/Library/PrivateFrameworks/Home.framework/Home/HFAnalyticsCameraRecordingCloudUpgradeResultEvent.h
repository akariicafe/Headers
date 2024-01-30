@interface HFAnalyticsCameraRecordingCloudUpgradeResultEvent : HFAnalyticsEvent

@property (nonatomic) unsigned long long numCamerasWithRecording;
@property (nonatomic) unsigned long long iCloudUpgradeOfferPresented;
@property (nonatomic) unsigned long long iCloudPlanUpgradeState;

- (id)payload;
- (id)initWithData:(id)a0;

@end
