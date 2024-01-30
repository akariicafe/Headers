@class NSXPCConnection;
@protocol ProxyAnalyticsDelegate;

@interface ProxyAnalytics : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain) id<ProxyAnalyticsDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)performAppPeriodicTasks;
- (void)performAppTrackingPeriodicTasks;
- (void)performAppEndpointTrackingPeriodicTasks;
- (void)performAppExperiencePeriodicTasks;
- (void)trainModelAndScore:(BOOL)a0 lastScoreDate:(id)a1;
- (void)performPersistentStoreHealthCheck;

@end
