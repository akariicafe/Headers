@class PSListController, NSString, CTXPCServiceSubscriptionContext, PSUICarrierSpaceOptInSplashScreen, CoreTelephonyClient, PSSpecifier, Logger, CTCarrierSpaceCapabilities, NSDictionary, RemoteUIController;

@interface PSUICarrierSpaceGroup : NSObject <RemoteUIControllerDelegate> {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    CoreTelephonyClient *_ctClient;
    Logger *_logger;
    NSDictionary *_specifersByID;
    BOOL _isSubscriptionDataPreferred;
}

@property (retain, nonatomic) RemoteUIController *remoteUIController;
@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (weak, nonatomic) PSSpecifier *parentSpecifier;
@property (retain, nonatomic) CTCarrierSpaceCapabilities *capabilities;
@property (retain, nonatomic) PSUICarrierSpaceOptInSplashScreen *optInSplashScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)remoteUIController:(id)a0 didReceiveHTTPResponse:(id)a1;
- (id)specifierForID:(id)a0;
- (void)remoteUIController:(id)a0 willPresentModalNavigationController:(id)a1;
- (void)openURLWithSpecifier:(id)a0;
- (void)carrierSpaceChanged;
- (void)newCarrierNotification;
- (id)getLogger;
- (void)setIsSubscriptionDataPreferred;
- (void)prepareSpecifiers;
- (id)cellularPlansSpecifier;
- (id)usageSpecifier;
- (id)carrierServicesSpecifier;
- (id)descriptionForPlans:(id)a0;
- (void)showConsentFlow:(id)a0;
- (id)descriptionForUsage:(id)a0;
- (void)showTermsAndConditions:(id)a0 consentFlowInfo:(id)a1;
- (void)agreePressed;
- (void)disagreeOrCancelPressed;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1 parentSpecifier:(id)a2 ctClient:(id)a3;

@end
