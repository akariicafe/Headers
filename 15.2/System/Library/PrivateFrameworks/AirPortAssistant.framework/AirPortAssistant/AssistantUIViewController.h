@class UIBarButtonItem, UILabel, AUPasswordUIAlert, NSDictionary, AssistantCallbackController, UITableView, AUUIAlert, UIView, AssistantSubUIViewController, NSString, UITextField, UIActivityIndicatorView, NetTopoMiniStaticLayout, AssistantUIController, NSArray;

@interface AssistantUIViewController : AUUITableViewController <AssistantUIDelegate, AssistantCallbackUIDelegate, UINavigationControllerDelegate, TableViewManagerDelegate, AUUIAlertDelegate> {
    UILabel *spinnerWithStatusBelowLabel;
    UIActivityIndicatorView *spinnerWithStatusBelowSpinner;
    NSDictionary *_recommendationParamDict;
    BOOL showingPasswordsAtEnd;
    int _currentUIConfigStep;
    NSDictionary *_mfiAccessoryResponseDict;
    BOOL _goingBack;
    unsigned long long _selectedActionTag;
}

@property (nonatomic) id assistantDelegate;
@property (retain, nonatomic) AssistantUIController *_assistantUIController;
@property (retain, nonatomic) AssistantCallbackController *_controllerContext;
@property (copy, nonatomic) NSDictionary *scanInfoRecord;
@property (copy, nonatomic) NSArray *paramScanResults;
@property (copy, nonatomic) NSDictionary *recommendationParamDict;
@property (copy, nonatomic) NSDictionary *callerParamDict;
@property (retain, nonatomic) AssistantSubUIViewController *currentSubController;
@property (retain, nonatomic) UIView *justTextContainerView;
@property (nonatomic) UILabel *justTextLabel;
@property (retain, nonatomic) UIView *topoView;
@property (retain, nonatomic) UIView *spinnerWithStatusAdjacentView;
@property (retain, nonatomic) UIView *spinnerWithStatusBelowView;
@property (retain, nonatomic) UIBarButtonItem *nextButton;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIView *tableHeaderContainerView;
@property (retain, nonatomic) UITableView *mainTableView;
@property (retain, nonatomic) AUPasswordUIAlert *passwordAlert;
@property (retain, nonatomic) AUUIAlert *askUserQuestionAlert;
@property (retain, nonatomic) AUUIAlert *connectionVerificationAlert;
@property (retain, nonatomic) AUUIAlert *uiAlert;
@property (nonatomic) long long letMeChooseButtonIndex;
@property (nonatomic) long long restoreButtonIndex;
@property (nonatomic) long long recommendationButtonIndex;
@property (retain, nonatomic) NetTopoMiniStaticLayout *topoLayout;
@property (copy, nonatomic) NSString *macAddress;
@property (retain, nonatomic) UITextField *currentTextField;
@property (retain) NSString *settingUpStatusText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)readjustSubviewsInContainer:(id)a0;

- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)loadView;
- (void)dealloc;
- (void)popToRootViewControllerAnimated:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (void)handleNextButton:(id)a0;
- (void)callbackAskCancel;
- (int)callbackAskUserAQuestion:(int)a0 paramDict:(id)a1 forController:(id)a2;
- (int)callbackAskUserForPassword:(int)a0 param:(id)a1 forController:(id)a2;
- (void)handleCancelButton:(id)a0;
- (void)initializeServiesDone;
- (void)readyToGuess;
- (void)doneWithAssistantResult:(int)a0;
- (void)skipWANPort;
- (id)newStepByStepControllerForStep:(int)a0;
- (void)handleCancelRequest:(BOOL)a0;
- (void)confirmSkipWANPort;
- (void)continueWithPPPoESettings;
- (void)continueWithSwapCabling;
- (void)skipPluginAudioCabling;
- (void)continueWithDiagsAndUsageStats;
- (void)continueWithGuestNetSettings;
- (void)startSetup:(id)a0;
- (void)showUIForSetupStatus;
- (void)setupCompleteShowPasswords:(BOOL)a0;
- (void)replaceSubviewsInView:(id)a0 newSubviews:(id)a1 withAnimation:(BOOL)a2;
- (id)modifyTopoUIInLayer:(id)a0 withLayout:(id)a1 newLayout:(id)a2;
- (void)baseStationConfigurationComplete:(id)a0;
- (void)assistantUpdateProgress:(id)a0 forState:(int)a1;
- (void)assistantWaitingForResourcesStart;
- (void)assistantWaitingForResourcesComplete;
- (void)presentUIForRecommendationStatus;
- (void)presentUIForRecommmendationTargetInfo:(id)a0;
- (void)presentUIForRecommendationResult:(int)a0 paramDict:(id)a1;
- (void)presentUIForStepByStepStart;
- (void)presentUIForStepByStepNextStep:(int)a0 paramDict:(id)a1;
- (void)presentUIForStepByStepResult:(int)a0;
- (void)presentUIForSetupStatusWithRecommendationDict:(id)a0;
- (void)presentUIForSetupResult:(int)a0 baseStationInfo:(id)a1 withPrompt:(id)a2;
- (void)showTellUserToPlugInEthernetForStatus:(int)a0 paramDict:(id)a1;
- (void)showTellUserToResetBroadbandDeviceForStatus:(int)a0 paramDict:(id)a1;
- (void)showAskUserForPPPoECredentialsForStatus:(int)a0 paramDict:(id)a1;
- (void)showAskUserSwapCablingForStatus:(int)a0 paramDict:(id)a1;
- (void)connectionVerificationSucceededForSelector:(int)a0;
- (void)showUIConfigPromptToSendDiagsUsageStatsWithParamDict:(id)a0;
- (void)showUIConfigPromptForGuestNetConfigWithParamDict:(id)a0;
- (int)callbackAskUserForSetupCode:(int)a0 isRetry:(BOOL)a1 forController:(id)a2;
- (int)callbackAskUserForUncertifiedForController:(id)a0;
- (void)touchInCellAtIndexPath:(id)a0;
- (id)valueForItemOfType:(id)a0 atTypeIndex:(unsigned long long)a1 inCellWithTag:(long long)a2;
- (BOOL)auUIAlertOKAction:(id)a0;
- (BOOL)auUIAlertCancelAction:(id)a0;
- (BOOL)auUIAlertAlternateAction:(id)a0;
- (BOOL)auUIAlertDestructiveAction:(id)a0;
- (void)playDoneSound;
- (void)showTellUserToFixTheirInternetConnection;
- (void)handeImmediateCancel;
- (void)presentWaitingForWANViewWithContinueText:(BOOL)a0;
- (id)radioNameFromBaseStation:(id)a0;
- (void)keyboardReturnKeySetEnabled:(BOOL)a0;

@end
