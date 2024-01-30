@class NSString;
@protocol TSSIMSetupDelegate;

@interface TSSIMSetupFlow : NSObject <TSSIMSetupFlowDelegate>

@property (weak) id<TSSIMSetupDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initWithOptions:(id)a0;
+ (id)initWithAppName:(id)a0 requireSetup:(BOOL)a1 skipGeneralInstallConsent:(BOOL)a2;
+ (void)needsToRun:(id /* block */)a0;
+ (void)needsToRunUsingMessageSession:(id)a0 completion:(id /* block */)a1;
+ (void)needsToRunUsingMessageSession:(id)a0 transferablePlanOnSource:(BOOL)a1 completion:(id /* block */)a2;
+ (id)initWithSetupFlowWithIccid:(id)a0 showAddPlan:(BOOL)a1;
+ (id)initActivationCodeRequireSetup:(BOOL)a0;
+ (id)initWithAppName:(id)a0 requireSetup:(BOOL)a1;
+ (id)initWithActivationCodeOnlyFlow;

- (void).cxx_destruct;
- (id)firstViewController;
- (void)waitForResponse:(id)a0;
- (void)receivedResponse;
- (void)userDidTapCancel;
- (void)viewControllerDidComplete:(id)a0;
- (id)nextViewControllerFrom:(id)a0;
- (void)navigateToNextPaneFrom:(id)a0 navigationController:(id)a1;
- (void)firstViewController:(id /* block */)a0;

@end
