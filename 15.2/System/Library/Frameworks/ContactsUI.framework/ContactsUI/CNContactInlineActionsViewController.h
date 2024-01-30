@class UIView, NSString, NSArray, CNUIContactsEnvironment, NSDictionary, CNUIUserActionListDataSource, CNContact, CNContactActionsController, CNActionsView;
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
@property (nonatomic) BOOL displaysUnavailableActionTypes;
@property (nonatomic) BOOL displaysTitles;
@property (retain, nonatomic) CNContact *contact;
@property (copy, nonatomic) NSArray *supportedActionTypes;
@property (nonatomic) double actionTypesInterspace;
@property (nonatomic) long long viewStyle;
@property (weak, nonatomic) id<CNContactInlineActionsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;
@property (weak, nonatomic) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;

+ (id)descriptorForRequiredKeys;

- (void)performAction:(id)a0;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)actionsView:(id)a0 shouldPresentDisambiguationUIForAction:(id)a1;
- (void)didSelectAction:(id)a0 withSourceView:(id)a1 longPress:(BOOL)a2;
- (void)processModels:(id)a0;
- (void)loadCachedActions;
- (void)contactActionsController:(id)a0 didUpdateWithMenu:(id)a1;
- (void)contactActionsController:(id)a0 didSelectAction:(id)a1;
- (void)discoverAvailableActionTypes;
- (id)allModelsObservable;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)reset;
- (id)initWithContactActionsContext:(id)a0;
- (id)initWithActionListDataSource:(id)a0 environment:(id)a1;
- (void)updateDesiredTitleFontSizeIfNeeded;
- (void)displayAllSupportedTypesDisabled;
- (void)setupSingleContactActions;
- (void)checkinLaunchTasksForUndiscoverableActionsForContact:(id)a0;
- (void)removeVisibleActionItems:(id)a0;
- (void)displayAdditionalActionItems:(id)a0;
- (void)updateVisibleActionItems:(id)a0;
- (void)displayActionForType:(id)a0 withDefaultAction:(id)a1 enabled:(BOOL)a2;
- (void)removeActionForType:(id)a0;
- (void)setupGroupActions;
- (id)makeActionItemForType:(id)a0;
- (void)updateActionItem:(id)a0 withDefaultAction:(id)a1;
- (id)existingActionItemForType:(id)a0;
- (void)generateActionsControllerForActionType:(id)a0;
- (BOOL)shouldShowDisambiguationForAction:(id)a0;
- (void)performGroupActionForType:(id)a0;
- (BOOL)isGroupActionsView;
- (id)actionImageTextStyleForViewStyle:(long long)a0;
- (void)notifyDelegateOfPerformedActionType:(id)a0 fromDisambiguation:(BOOL)a1;
- (void)notifyDelegateOfDisambiguationForActionType:(id)a0;

@end
