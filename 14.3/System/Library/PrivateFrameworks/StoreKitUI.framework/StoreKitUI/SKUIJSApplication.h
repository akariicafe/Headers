@class SKUIApplicationController;

@interface SKUIJSApplication : IKJSApplication <SKUIJSApplication>

@property (readonly, weak, nonatomic) SKUIApplicationController *applicationController;
@property (readonly, nonatomic) BOOL pageRenderMetricsEnabled;
@property (readonly) BOOL isRunningTests;

- (void).cxx_destruct;
- (void)launchFailed;
- (void)launchComplete:(id)a0;
- (void)sendDocumentMessage:(id)a0 :(id)a1 :(id)a2;
- (id)initWithAppContext:(id)a0 applicationController:(id)a1;

@end
