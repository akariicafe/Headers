@class PSListController, NSString, CTXPCServiceSubscriptionContext, PSUICarrierSpaceOptInSplashScreen, CoreTelephonyClient, PSSpecifier, NSDictionary, CTCarrierSpaceCapabilities, RemoteUIController;

@interface PSUICarrierSpaceGroup : NSObject <RemoteUIControllerDelegate> {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    CoreTelephonyClient *_ctClient;
    NSDictionary *_specifersByID;
    BOOL _isSubscriptionDataPreferred;
    NSString *_instance;
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

- (id)getLogger;
- (id)specifierForID:(id)a0;
- (void).cxx_destruct;
- (void)remoteUIController:(id)a0 didReceiveHTTPResponse:(id)a1;
- (void)remoteUIController:(id)a0 willPresentModalNavigationController:(id)a1;
- (void)newCarrierNotification;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1 parentSpecifier:(id)a2 ctClient:(id)a3;
- (void)agreePressed;
- (id)carrierServicesSpecifier;
- (void)carrierSpaceChanged;
- (id)cellularPlansSpecifier;
- (id)descriptionForPlans:(id)a0;
- (id)descriptionForUsage:(id)a0;
- (void)disagreeOrCancelPressed;
- (void)openURLWithSpecifier:(id)a0;
- (void)prepareSpecifiers;
- (void)refreshSpecifiers;
- (void)setIsSubscriptionDataPreferred;
- (void)showConsentFlow:(id)a0;
- (void)showTermsAndConditions:(id)a0 consentFlowInfo:(id)a1;
- (id)usageSpecifier;

@end
