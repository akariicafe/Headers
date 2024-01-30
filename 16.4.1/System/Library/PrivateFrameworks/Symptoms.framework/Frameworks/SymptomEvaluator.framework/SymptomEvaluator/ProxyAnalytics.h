@class NSXPCConnection;
@protocol ProxyAnalyticsDelegate;

@interface ProxyAnalytics : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain) id<ProxyAnalyticsDelegate> delegate;

- (void)performAppEndpointTrackingPeriodicTasks;
- (void)requestReverseGeocodeForLatitude:(double)a0 longitude:(double)a1 interfaceType:(long long)a2;
- (void)performAppPeriodicTasks;
- (void)performAppTrackingPeriodicTasks;
- (void)performAppExperiencePeriodicTasks;
- (void)performPersistentStoreHealthCheck;
- (void)trainModelAndScore:(BOOL)a0 lastScoreDate:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
