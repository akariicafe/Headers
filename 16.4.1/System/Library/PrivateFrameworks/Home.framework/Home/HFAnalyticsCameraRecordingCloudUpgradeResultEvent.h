@interface HFAnalyticsCameraRecordingCloudUpgradeResultEvent : HFAnalyticsEvent

@property (nonatomic) unsigned long long numCamerasWithRecording;
@property (nonatomic) unsigned long long iCloudUpgradeOfferPresented;
@property (nonatomic) unsigned long long iCloudPlanUpgradeState;

- (id)initWithData:(id)a0;
- (id)payload;

@end
