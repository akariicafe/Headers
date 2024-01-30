@class NSString, NSDictionary, CNContact, NSArray, UIViewController;
@protocol CNContactActionsControllerDelegate, CNUIUserActionListDataSource, CNUINavigationListStyle;

@interface CNContactActionsController : NSObject <CNAvatarCardActionListController, CNUINavigationListViewControllerDelegate, CNUIUserActionListConsumer>

@property (nonatomic) BOOL actionsReversed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) id<CNUIUserActionListDataSource> actionsDataSource;
@property (copy, nonatomic) NSDictionary *modelsByActionTypes;
@property (retain, nonatomic) NSArray *modelCancelables;
@property (retain, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) id<CNContactActionsControllerDelegate> delegate;
@property (weak, nonatomic) id<CNUINavigationListStyle> navigationListStyle;
@property (nonatomic) long long actionsOrder;
@property (readonly, copy, nonatomic) NSArray *actionTypes;
@property (nonatomic) BOOL displayMenuIconAtTopLevel;
@property (nonatomic) BOOL generateFaceTimeListItemsOnly;
@property (nonatomic) BOOL generateFavoritesListItemsOnly;
@property (nonatomic) BOOL shouldUseOutlinedActionGlyphStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)supportedActionTypes;

- (void)dealloc;
- (void).cxx_destruct;
- (id)actionForItem:(id)a0 withImage:(id)a1;
- (void)cancelModels;
- (id)displayedController;
- (void)generateMenuForItem:(id)a0 image:(id)a1 withCurrentList:(id)a2;
- (id)imageForActionType:(id)a0;
- (id)initWithContact:(id)a0 actionTypes:(id)a1;
- (id)initWithContact:(id)a0 dataSource:(id)a1 actionTypes:(id)a2;
- (id)modelForActionType:(id)a0;
- (void)navigationListController:(id)a0 didSelectItem:(id)a1;
- (id)navigationListItemForUserActionType:(id)a0;
- (void)prepareNavigationListItems;
- (void)retrieveModels;
- (void)styleUpdated;

@end
