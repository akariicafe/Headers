@class SWContainerViewController, SXComponentExposureMonitor;
@protocol SXWebContentDataSourceProviding, SXWebContentComponentDeveloperSettingsProvider, SXAnalyticsReportingProvider, SWNavigationManager, SXWebContentComponentInteractionManagerFactory, SXWebContentConfigurationProvider, TFResolver, SWReachabilityProvider, SXResourceDataSourceProvider, SWLoadingPolicyProvider, SXWebContentComponentContentRuleProvider, SXLayoutInvalidator;

@interface SXWebContentComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<TFResolver> resolver;
@property (readonly, nonatomic) id<SXAnalyticsReportingProvider> analyticsReportingProvider;
@property (readonly, nonatomic) SWContainerViewController *containerViewController;
@property (readonly, nonatomic) id<SXWebContentConfigurationProvider> configurationProvider;
@property (readonly, nonatomic) id<SWNavigationManager> navigationManager;
@property (readonly, nonatomic) id<SXWebContentComponentInteractionManagerFactory> interactionManagerFactory;
@property (readonly, nonatomic) id<SWReachabilityProvider> reachabilityProvider;
@property (readonly, nonatomic) id<SXResourceDataSourceProvider> resourceDataSourceProvider;
@property (readonly, nonatomic) id<SWLoadingPolicyProvider> loadingPolicyProvider;
@property (readonly, nonatomic) id<SXLayoutInvalidator> layoutInvalidator;
@property (readonly, nonatomic) id<SXWebContentDataSourceProviding> dataSourceProvider;
@property (readonly, nonatomic) SXComponentExposureMonitor *componentExposureMonitor;
@property (readonly, nonatomic) id<SXWebContentComponentContentRuleProvider> contentRuleProvider;
@property (readonly, nonatomic) id<SXWebContentComponentDeveloperSettingsProvider> developerSettingsProvider;

- (id)type;
- (int)role;
- (void).cxx_destruct;
- (id)componentViewForComponent:(id)a0;
- (id)initWithResolver:(id)a0 DOMObjectProvider:(id)a1 viewport:(id)a2 presentationDelegateProvider:(id)a3 componentStyleRendererFactory:(id)a4 containerViewController:(id)a5 configurationProvider:(id)a6 navigationManager:(id)a7 analyticsReportingProvider:(id)a8 componentExposureMonitor:(id)a9 interactionManagerFactory:(id)a10 reachabilityProvider:(id)a11 resourceDataSourceProvider:(id)a12 loadingPolicyProvider:(id)a13 dataSourceProvider:(id)a14 layoutInvalidator:(id)a15 contentRuleProvider:(id)a16 developerSettingsProvider:(id)a17;

@end
