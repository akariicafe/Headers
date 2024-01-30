@class NSString;
@protocol SXVisibilityMonitoring, SXVolumeProviding;

@interface SXVASTAnalyticsEventInfoFactory : NSObject <SXVASTAnalyticsEventInfoFactory>

@property (readonly, nonatomic) id<SXVisibilityMonitoring> visibilityMonitor;
@property (readonly, nonatomic) id<SXVolumeProviding> volumeProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithVisibilityMonitor:(id)a0 volumeProvider:(id)a1;
- (id)createAnalyticsEventInfo;
- (id)createAnalyticsEventInfoWithMetadata:(id)a0;
- (id)createAnalyticsProgressEventInfoForQuartile:(unsigned long long)a0 withMetadata:(id)a1;

@end
