@class WKWebsiteDataStore;
@protocol SXAnalyticsReportingProvider, SXProxyAuthenticationHandler, SXAppStateMonitor, SXComponentActionHandler, SXSceneStateMonitor;

@interface SXEmbedVideoComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<SXComponentActionHandler> actionHandler;
@property (readonly, nonatomic) id<SXAnalyticsReportingProvider> analyticsReportingProvider;
@property (readonly, nonatomic) id<SXAppStateMonitor> appStateMonitor;
@property (readonly, nonatomic) WKWebsiteDataStore *dataStore;
@property (readonly, nonatomic) id<SXProxyAuthenticationHandler> proxyAuthenticationHandler;
@property (readonly, nonatomic) id<SXSceneStateMonitor> sceneStateMonitor;

- (id)type;
- (int)role;
- (void).cxx_destruct;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 analyticsReportingProvider:(id)a4 appStateMonitor:(id)a5 sceneStateMonitor:(id)a6 actionHandler:(id)a7 websiteDataStore:(id)a8 proxyAuthenticationHandler:(id)a9;

@end
