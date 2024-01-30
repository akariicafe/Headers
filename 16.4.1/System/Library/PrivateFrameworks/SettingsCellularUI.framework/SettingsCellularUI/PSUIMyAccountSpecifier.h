@class UINavigationController, Logger, PSUICarrierSpaceMyAccountWebViewController, CTXPCServiceSubscriptionContext, PSListController;

@interface PSUIMyAccountSpecifier : PSSpecifier

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *context;
@property (retain, nonatomic) PSUICarrierSpaceMyAccountWebViewController *myAccountWebViewController;
@property (retain, nonatomic) UINavigationController *navCon;
@property (retain, nonatomic) Logger *logger;
@property (weak, nonatomic) PSListController *hostController;

- (id)getLogger;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 cbCache:(id)a1;
- (void)launchMyAccountInSafari:(id)a0;
- (void)launchMyAccountInWebView:(id)a0;

@end
