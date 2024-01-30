@class NSObject, FBServiceClientAuthenticator, NSString, BSServiceConnectionListener, NSMutableArray;
@protocol OS_dispatch_queue, SBSWidgetMetricsProviding;

@interface SBWidgetMetricsServer : NSObject <BSServiceConnectionListenerDelegate, SBSWidgetMetricsServiceServerInterface>

@property (readonly, copy, nonatomic) NSMutableArray *connections;
@property (readonly, nonatomic) FBServiceClientAuthenticator *authenticator;
@property (readonly, nonatomic) BSServiceConnectionListener *listener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) id<SBSWidgetMetricsProviding> systemMetricsProvider;
@property (readonly, weak, nonatomic) id<SBSWidgetMetricsProviding> lockScreenMetricsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)previewMetricsSpecificationForBundleIdentifier:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)metricsForLiveActivities;
- (id)previewMetricsSpecificationForDeviceContext:(id)a0 displayContext:(id)a1 bundleIdentifier:(id)a2;
- (void)dealloc;
- (id)init;
- (id)systemMetricsForWidget:(id)a0;
- (void).cxx_destruct;
- (id)_metricsProviderForWidget:(id)a0;
- (id)initWithSystemMetricsProvider:(id)a0 lockScreenMetricsProvider:(id)a1;

@end
