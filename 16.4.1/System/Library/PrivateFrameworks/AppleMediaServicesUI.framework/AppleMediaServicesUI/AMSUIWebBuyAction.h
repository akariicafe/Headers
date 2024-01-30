@class NSString, NSDictionary, AMSUIWebClientContext, ACAccount;

@interface AMSUIWebBuyAction : AMSUIWebAction <AMSPurchaseDelegate, AMSUIWebActionRunnable>

@property (retain, nonatomic) NSString *contentType;
@property (nonatomic) BOOL makeCurrentAccount;
@property (nonatomic) BOOL requiresAccount;
@property (retain, nonatomic) NSDictionary *metricsOverlay;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *buyParams;
@property (nonatomic) BOOL legacyBuy;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AMSUIWebClientContext *context;

- (void).cxx_destruct;
- (void)purchase:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (id)_iTunesAccount;
- (id)_runBuy;
- (void)_makeCurrentAccountIfNeeded:(id)a0;
- (id)_purchasePluginIdentifierForContentType:(id)a0;
- (id)_runBuyWithContentType:(id)a0;
- (id)_runLegacyBuy;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)purchaseContentWithType:(id)a0;
- (id)runAction;

@end
