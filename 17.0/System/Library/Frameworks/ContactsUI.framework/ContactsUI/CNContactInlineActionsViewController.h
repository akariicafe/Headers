@class UIView, NSString, NSArray, CNUIContactsEnvironment, NSDictionary, CNUIUserActionListDataSource, CNContactActionsController, CNActionsView, CNContact, UIColor;
@protocol CNContactInlineActionsViewControllerDelegate, CNUIObjectViewControllerDelegate, CNSchedulerProvider, CNCustomPresentation;

@interface CNContactInlineActionsViewController : UIViewController <CNActionsViewProtocol, CNUIUserActionListConsumer, CNContactActionsControllerDelegate, CNUIObjectViewController>

@property (copy, nonatomic) NSArray *actionItems;
@property (copy, nonatomic) NSArray *tokens;
@property (copy, nonatomic) NSDictionary *defaultActionPerType;
@property (retain, nonatomic) id<CNCustomPresentation> actionsControllerPresentation;
@property (retain, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) double throttleDelay;
@property (retain, nonatomic) CNContactActionsController *actionsController;
@property (retain, nonatomic) CNUIContactsEnvironment *environment;
@property (retain, nonatomic) CNUIUserActionListDataSource *actionListDataSource;
@property (retain, nonatomic) NSArray *contacts;
@property (weak, nonatomic) CNActionsView *actionsView;
@property (retain, nonatomic) UIColor *posterTintColor;
@property (nonatomic) BOOL displaysUnavailableActionTypes;
@property (nonatomic) BOOL displaysTitles;
@property (retain, nonatomic) CNContact *contact;
@property (copy, nonatomic) NSArray *supportedActionTypes;
@property (nonatomic) double actionTypesInterspace;
@property (nonatomic) long long viewStyle;
@property (weak, nonatomic) id<CNContactInlineActionsViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *geminiChannelIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;
@property (weak, nonatomic) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;

+ (id)descriptorForRequiredKeys;

- (void)reset;
- (void)dealloc;
- (void)performAction:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)actionImageTextStyleForViewStyle:(long long)a0;
- (BOOL)actionsView:(id)a0 shouldPresentDisambiguationUIForAction:(id)a1;
- (id)allModelsObservable;
- (void)checkinLaunchTasksForUndiscoverableActionsForContact:(id)a0;
- (void)contactActionsController:(id)a0 didSelectAction:(id)a1;
- (void)contactActionsController:(id)a0 didUpdateWithMenu:(id)a1;
- (void)didSelectAction:(id)a0 withSourceView:(id)a1 longPress:(BOOL)a2;
- (void)discoverAvailableActionTypes;
- (void)displayActionForType:(id)a0 withDefaultAction:(id)a1 enabled:(BOOL)a2;
- (void)displayAdditionalActionItems:(id)a0;
- (void)displayAllSupportedTypesDisabled;
- (id)existingActionItemForType:(id)a0;
- (void)generateActionsControllerForActionType:(id)a0;
- (id)initWithActionListDataSource:(id)a0 environment:(id)a1;
- (id)initWithContactActionsContext:(id)a0;
- (BOOL)isGroupActionsView;
- (void)loadCachedActions;
- (id)makeActionItemForType:(id)a0;
- (void)notifyDelegateOfDisambiguationForActionType:(id)a0;
- (void)notifyDelegateOfPerformedActionType:(id)a0 fromDisambiguation:(BOOL)a1;
- (void)performGroupActionForType:(id)a0;
- (void)processModels:(id)a0;
- (void)removeActionForType:(id)a0;
- (void)removeVisibleActionItems:(id)a0;
- (void)setupGroupActions;
- (void)setupSingleContactActions;
- (BOOL)shouldShowDisambiguationForAction:(id)a0;
- (void)updateActionItem:(id)a0 withDefaultAction:(id)a1;
- (void)updateDesiredTitleFontSizeIfNeeded;
- (void)updateVisibleActionItems:(id)a0;

@end
