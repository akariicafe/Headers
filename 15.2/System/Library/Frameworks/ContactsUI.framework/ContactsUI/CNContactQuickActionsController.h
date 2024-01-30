@class NSString, NSArray, NSDictionary, CNContactQuickActionsDisambiguationMenuPresentation, CNContact, UIViewController, CNContactActionsController, NSObject;
@protocol CNCancelable, CNUIUserActionContext, CNSchedulerProvider, CNKeyDescriptor, CNContactQuickActionViewContainer, CNUIUserActionListDataSource, CNUINavigationListStyle, CNContactQuickActionsControllerDelegate, OS_os_log;

@interface CNContactQuickActionsController : NSObject <CNUIUserActionListConsumer, CNContactActionsControllerDelegate>

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;
@property (class, readonly, nonatomic) id<CNKeyDescriptor> descriptorForRequiredKeys;

@property (readonly, nonatomic) id<CNUIUserActionListDataSource> userActionListDataSource;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (retain, nonatomic) id<CNCancelable> actionDisoveryToken;
@property (retain, nonatomic) NSDictionary *actionListModelsByActionType;
@property (readonly, nonatomic) id<CNUIUserActionContext> userActionContext;
@property (retain, nonatomic) CNContactActionsController *disambiguationMenuController;
@property (retain, nonatomic) UIViewController *disambiguationMenuViewController;
@property (readonly, nonatomic) CNContactQuickActionsDisambiguationMenuPresentation *disambiguationMenuPresentation;
@property (retain, nonatomic) id<CNUINavigationListStyle> navigationListStyle;
@property (readonly, weak, nonatomic) id<CNContactQuickActionViewContainer> contactQuickActionViewContainer;
@property (weak, nonatomic) id<CNContactQuickActionsControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *actionTypes;
@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithActionTypes:(id)a0 contactQuickActionViewContainer:(id)a1 disambiguationMenuPresentation:(id)a2 userActionListDataSource:(id)a3 schedulerProvider:(id)a4 userActionContext:(id)a5;
- (void)performAction:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)discoverActions;
- (void)tearDownDisambiguationMenu;
- (id)defaultTitleForActionType:(id)a0;
- (void)processDiscoveredModels:(id)a0;
- (void)storeDiscoveredModels:(id)a0;
- (id)initWithActionTypes:(id)a0 contactQuickActionViewContainer:(id)a1;
- (id)initWithActionTypes:(id)a0 contactQuickActionViewContainer:(id)a1 disambiguationMenuPresentation:(id)a2;
- (void)cleanUpAfterLatestActionDiscovery;
- (void)reportStoredModelsToQuickActionContainer;
- (void)reportStoredModel:(id)a0 forActionType:(id)a1 toQuickActionContainer:(id)a2;
- (void)executeTapBehaviorForActionType:(id)a0;
- (void)executeLongPressBehaviorForActionType:(id)a0;
- (void)showDisambiguationMenuForActionType:(id)a0;
- (void)setupDisambiguationMenuForActionType:(id)a0;
- (void)disambiguationViewControllerDismissedExternally:(id)a0;
- (void)contactActionsController:(id)a0 didSelectAction:(id)a1;
- (id)allModelsObservable;
- (void)dealloc;

@end
