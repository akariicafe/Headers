@class ASCPendingPromises;
@protocol ASCServices;

@interface ASCMetrics : NSObject

@property (class, readonly) ASCMetrics *sharedMetrics;

@property (readonly, nonatomic) id<ASCServices> connection;
@property (readonly, nonatomic) ASCPendingPromises *pendingProcesses;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)daemonConnectionWasLost:(id)a0;
- (id)processViewMetrics:(id)a0 atInvocationPoint:(id)a1 withActivity:(id)a2;
- (id)processViewRenderWithPredicate:(id)a0;
- (id)processMetricsData:(id)a0 withActivity:(id)a1;
- (void)logErrorMessage:(id)a0;
- (id)processMetricsData:(id)a0 pageFields:(id)a1 activity:(id)a2;
- (id)recordCampaignToken:(id)a0 providerToken:(id)a1 withLockup:(id)a2;
- (id)recordQToken:(id)a0 campaignToken:(id)a1 advertisementID:(id)a2 withLockup:(id)a3;

@end
