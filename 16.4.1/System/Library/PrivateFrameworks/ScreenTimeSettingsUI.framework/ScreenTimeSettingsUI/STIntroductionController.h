@class STIntroductionViewModel, NSString, UINavigationController, _TtC20ScreenTimeSettingsUI23SettingsPresetViewModel, UIViewController, NSNumber, NSObject;
@protocol STContentPrivacyViewModelCoordinator;

@interface STIntroductionController : NSObject

@property (readonly, copy) NSNumber *childAge;
@property (readonly, copy) NSString *altDSID;
@property (readonly, copy) NSNumber *dsid;
@property (readonly) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator;
@property (readonly) STIntroductionViewModel *introductionModel;
@property (nonatomic) BOOL isModalPresentation;
@property (retain) UINavigationController *navigationController;
@property (retain, nonatomic) _TtC20ScreenTimeSettingsUI23SettingsPresetViewModel *settingsPresetViewModel;
@property BOOL updateExistingSettings;
@property BOOL skipAppLimitsPane;
@property BOOL showCommunicationSafetyPane;
@property BOOL allowParentalControls;
@property BOOL forceParentalControls;
@property BOOL askForRecoveryAppleID;
@property (getter=isChildOrNotSignedIntoiCloud) BOOL childOrNotSignedIntoiCloud;
@property (copy) NSString *childName;
@property (copy) id /* block */ completionBlock;
@property (readonly) UIViewController *initialViewController;

- (void).cxx_destruct;
- (void)_endIntroductionFlowWithEnablingScreenTime;
- (void)_endIntroductionFlowWithoutEnablingScreenTime;
- (void)_viewControllerCompleted:(id)a0;
- (id)_viewControllerFollowingViewController:(id)a0;
- (id)initWithDSID:(id)a0 childAge:(id)a1 childName:(id)a2 updateExistingSettings:(BOOL)a3 contentPrivacyCoordinator:(id)a4;
- (void)presentOverViewController:(id)a0;

@end
