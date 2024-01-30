@class ASCPendingPromises;
@protocol ASCServices;

@interface ASCMetrics : NSObject

@property (class, readonly) ASCMetrics *sharedMetrics;

@property (readonly, nonatomic) id<ASCServices> connection;
@property (readonly, nonatomic) ASCPendingPromises *pendingProcesses;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (void)daemonConnectionWasLost:(id)a0;
- (id)processViewMetrics:(id)a0 atInvocationPoint:(id)a1 withActivity:(id)a2;
- (id)processViewRenderWithPredicate:(id)a0;
- (id)processMetricsData:(id)a0 withActivity:(id)a1;
- (void)logErrorMessage:(id)a0;
- (id)processMetricsData:(id)a0 pageFields:(id)a1 activity:(id)a2;
- (id)recordCampaignToken:(id)a0 providerToken:(id)a1 withLockup:(id)a2;

@end
