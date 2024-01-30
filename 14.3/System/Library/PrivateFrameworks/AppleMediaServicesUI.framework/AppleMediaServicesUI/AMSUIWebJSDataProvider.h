@class AMSUIWebJSProperties, NSString, AMSUIWebClientContext, AMSUIWebView;

@interface AMSUIWebJSDataProvider : NSObject <AMSUIWebJSPropertiesDelegate>

@property (weak, nonatomic) AMSUIWebView *webView;
@property (weak, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) AMSUIWebJSProperties *properties;
@property (retain, nonatomic) NSString *otpIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)runJSRequest:(id)a0;
- (id)syncProperties;
- (id)postEvent:(id)a0 options:(id)a1;
- (id)loadPageModelWithInfo:(id)a0;
- (void)_observeNotifications;
- (id)_syncPropertiesScriptWithProperties:(id)a0;
- (BOOL)_canInteractWithJS;
- (BOOL)stopOTPListener;
- (void)_postSubscriptionChangedWithType:(long long)a0;
- (void)_safariDataUpdate:(id)a0;
- (void)_subscriptionStatusChangeActivity:(id)a0;
- (void)_subscriptionStatusChangeAppStore:(id)a0;
- (void)_subscriptionStatusChangeNews:(id)a0;
- (void)_subscriptionStatusChangeMusic:(id)a0;
- (void)_subscriptionStatusChangeTV:(id)a0;
- (void)_subscriptionStatusChangeiCloud:(id)a0;
- (void)_purchaseDidSucceed:(id)a0;
- (void)propertiesDidChange:(id)a0;
- (id)createWebView;
- (BOOL)startOTPListener;

@end
