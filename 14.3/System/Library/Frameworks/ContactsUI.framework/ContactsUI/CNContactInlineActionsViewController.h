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
- (void)loadCachedActions;
- (id)initWithContactActionsContext:(id)a0;
- (id)initWithActionListDataSource:(id)a0 environment:(id)a1;
- (void)updateDesiredTitleFontSizeIfNeeded;
- (void)displayAllSupportedTypesDisabled;
- (void)setupGroupActions;
- (void)setupSingleContactActions;
- (void)processModels:(id)a0;
- (void)checkinLaunchTasksForUndiscoverableActionsForContact:(id)a0;
- (void)removeVisibleActionItems:(id)a0;
- (void)displayAdditionalActionItems:(id)a0;
- (void)updateVisibleActionItems:(id)a0;
- (void)discoverAvailableActionTypes;
- (void)displayActionForType:(id)a0 withDefaultAction:(id)a1 enabled:(BOOL)a2;
- (void)removeActionForType:(id)a0;
- (id)makeActionItemForType:(id)a0;
- (void)updateActionItem:(id)a0 withDefaultAction:(id)a1;
- (id)existingActionItemForType:(id)a0;
- (void)generateActionsControllerForActionType:(id)a0;
- (BOOL)isGroupActionsView;
- (BOOL)shouldShowDisambiguationForAction:(id)a0;
- (void)performGroupActionForType:(id)a0;
- (id)actionImageTextStyleForViewStyle:(long long)a0;
- (void).cxx_destruct;
- (id)allModelsObservable;
- (void)reset;
- (void)dealloc;
- (void)loadView;
- (BOOL)actionsView:(id)a0 shouldPresentDisambiguationUIForAction:(id)a1;
- (void)didSelectAction:(id)a0 withSourceView:(id)a1 longPress:(BOOL)a2;
- (void)contactActionsController:(id)a0 didUpdateWithMenu:(id)a1;
- (void)contactActionsController:(id)a0 didSelectAction:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
