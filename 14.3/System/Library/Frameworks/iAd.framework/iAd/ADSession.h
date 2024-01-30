@class NSString, ADAdServingDaemonConnection, ADDeviceInfo, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, ADSSession_RPC;

@interface ADSession : NSObject <ADSession_RPC, ADAdServingDaemonConnectionDelegate>

@property (retain, nonatomic) NSMutableArray *adSpaces;
@property (nonatomic) int classicUnavailableToken;
@property (retain, nonatomic) ADAdServingDaemonConnection *connection;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *adSpaceQueue;
@property (nonatomic) BOOL applicationCanRecieveAds;
@property (readonly, nonatomic) id<ADSSession_RPC> rpcProxy;
@property (retain, nonatomic) ADDeviceInfo *deviceInfo;
@property (nonatomic) BOOL applicationCanReceiveBackgroundAds;
@property (nonatomic) BOOL appExtensionCanReceiveAds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)adShouldCreateADSession;

- (void)addClientToSegments:(id)a0 replaceExisting:(BOOL)a1;
- (BOOL)shouldConnectToAdServingDaemon;
- (void)_remote_creativeWithAdSpaceIdentifier:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void)_remote_updateActionViewControllerOrientation:(unsigned long long)a0 forAdSpaceWithIdentifier:(id)a1;
- (void)_currentClientAdSpaces;
- (void)orientationChanged:(id)a0;
- (void).cxx_destruct;
- (id)_adSpaceForIdentifier:(id)a0;
- (void)dealloc;
- (void)_appDidEnterBackground;
- (void)createDeviceInfo;
- (id)rpcProxyWithErrorHandler:(id /* block */)a0;
- (void)_remote_policyEngineDidIdleDisable;
- (void)_remote_configVersionDidChange:(id)a0;
- (void)_remote_actionViewControllerReadyForPresentationForAdSpaceWithIdentifier:(id)a0;
- (void)_remote_openURL:(id)a0 forAdSpaceWithIdentifier:(id)a1;
- (void)_remote_contentProxyURLDidChange:(id)a0;
- (void)_remote_deviceInfo:(id /* block */)a0;
- (id)_linkedOnVersion;
- (void)adServingDaemonConnectionEstablished;
- (void)registerAdSpace:(id)a0;
- (void)reportPrerollRequest;
- (void)segmentDataForSignedInUserWithBlock:(id /* block */)a0;
- (void)_remote_adDataForAdSpace:(id)a0 completionHandler:(id /* block */)a1;
- (void)performWhenConnected:(id /* block */)a0;
- (void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(id)a0;
- (void)configureConnection:(id)a0;
- (id)adServingDaemonMachServiceName;
- (void)_remote_adImpressionReportedWithIdentifier:(id)a0;
- (void)_remote_requestViewControllerWithClassName:(id)a0 forAdSpaceControllerWithIdentifier:(id)a1 forAdSpaceWithIdentifier:(id)a2;
- (void)adServingDaemonConnectionLost;
- (void)prepareForAdRequests;
- (void)_remote_adImpressionDidLoadWithPublicAttributes:(id)a0 identifier:(id)a1;
- (void)_remote_contentProxyURLConnectDidChange:(id)a0;
- (void)_appDidBecomeActive;
- (void)establishRPCConnection;
- (void)_remote_setRequiresFastVisibilityTestOnly:(BOOL)a0 withIdentifier:(id)a1;
- (void)adAnalyticsEventReceived:(id)a0;
- (void)addClientToSegments:(id)a0 replaceExisting:(BOOL)a1 privateSegment:(BOOL)a2;
- (void)_remote_closeClientAdSpaceWithIdentifier:(id)a0;
- (void)updateDeviceInfo;
- (id)additionalAdServingDaemonLaunchOptions;
- (void)_reportAdSubscriptionEvent:(id)a0;
- (void)unregisterAdSpace:(id)a0;
- (void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_remote_proxyTypeDidChange:(long long)a0;

@end
