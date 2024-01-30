@class DMCEnrollmentFlowController, DMCUnenrollmentFlowController, DMCAccountSpecifierProvider, UIViewController;
@protocol DMCEnrollmentFlowMCBridge;

@interface DMCEnrollmentInterface : NSObject

@property (weak, nonatomic) UIViewController *parentViewController;
@property (copy, nonatomic) id /* block */ enrollmentResultBlock;
@property (retain, nonatomic) id<DMCEnrollmentFlowMCBridge> mcHelper;
@property (nonatomic) BOOL isUpdatingEnrollment;
@property (retain, nonatomic) DMCEnrollmentFlowController *enrollmentFlowController;
@property (retain, nonatomic) DMCUnenrollmentFlowController *unenrollmentFlowController;
@property (retain, nonatomic) DMCAccountSpecifierProvider *accountSpecifierProvider;

+ (id)accountControllerFromSpecifier:(id)a0 baseViewController:(id)a1 preferiCloudAccount:(BOOL)a2;
+ (Class)preferredViewControllerClassForAccount:(id)a0 preferiCloudAccount:(BOOL)a1;

- (void).cxx_destruct;
- (id)initFromViewController:(id)a0 enrollmentResultBlock:(id /* block */)a1;
- (id)specifiersForManagedAccounts;
- (id)_specifiersForManagedAccountSignIn;
- (id)initFromViewController:(id)a0 enrollmentResultBlock:(id /* block */)a1 managedConfigurationHelper:(id)a2;
- (void)startBYODEnrollment;
- (void)startUnenrollmentWithAltDSID:(id)a0;

@end
