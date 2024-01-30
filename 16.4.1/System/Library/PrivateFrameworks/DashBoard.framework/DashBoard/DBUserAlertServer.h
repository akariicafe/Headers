@class NSMutableDictionary, NSString, URTAlertService, DBEnvironmentConfiguration, NSMutableArray;
@protocol DBSystemAlertPresenting, DBAppAlertPresenting;

@interface DBUserAlertServer : NSObject <URTAlertServiceDelegate, BSInvalidatable>

@property (readonly, nonatomic) DBEnvironmentConfiguration *environmentConfiguration;
@property (readonly, nonatomic) URTAlertService *service;
@property (readonly, nonatomic) NSMutableArray *pendingSystemViewControllers;
@property (readonly, nonatomic) NSMutableDictionary *pendingViewControllersForAppBundleID;
@property (weak, nonatomic) id<DBSystemAlertPresenting> systemPresenter;
@property (weak, nonatomic) id<DBAppAlertPresenting> appPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)alertService:(id)a0 wantsDismissalForAlert:(id)a1;
- (void)alertService:(id)a0 wantsPresentationForAlert:(id)a1;
- (id)alertViewControllerForBundleID:(id)a0;
- (void)_dismissSystemViewController:(id)a0;
- (void)_dismissViewController:(id)a0 overApplication:(id)a1;
- (void)_presentSystemViewController:(id)a0;
- (void)_presentViewController:(id)a0 overApplication:(id)a1;
- (id)initWithEnvironmentConfiguration:(id)a0;

@end
