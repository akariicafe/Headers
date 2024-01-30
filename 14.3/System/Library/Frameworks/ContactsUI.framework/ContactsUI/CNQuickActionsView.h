@class NSString, NSArray, UICollectionViewFlowLayout, CNContactActionsController, CNQuickActionsManager, CNQuickAction, UICollectionView, UIAlertController, CNContact, NSDictionary;
@protocol CNQuickActionsViewDelegate;

@interface CNQuickActionsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, CNQuickActionsManagerDelegate, CNQuickActionButtonDelegate, CNContactActionsControllerDelegate, CNUIUserActionListConsumer>

@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct CGSize { double width; double height; } cachedContentSize;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) CNContactActionsController *actionsController;
@property (retain, nonatomic) CNQuickAction *performingAction;
@property (retain, nonatomic) CNQuickActionsManager *actionsManager;
@property (readonly, nonatomic) double maximumWidth;
@property (retain, nonatomic) CNContact *contact;
@property (copy, nonatomic) NSArray *categories;
@property (nonatomic) BOOL sortsWithDuet;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;
@property (nonatomic) double interspace;
@property (nonatomic) BOOL useDuetIfAvailable;
@property (nonatomic) BOOL showTitles;
@property (nonatomic) BOOL showBackgroundPlatters;
@property (weak, nonatomic) id<CNQuickActionsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)actionsManagerForContact:(id)a0;
+ (id)defaultCategories;
+ (BOOL)hasActionsForContact:(id)a0;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)reloadData;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithContact:(id)a0;
- (void)performAction:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (BOOL)quickActionButton:(id)a0 performAction:(id)a1;
- (void)actionsManager:(id)a0 actionDidPerform:(id)a1;
- (void)_updateActions;
- (id)actionsManager:(id)a0 presentingViewControllerForAction:(id)a1;
- (double)_widthForButtonCount:(long long)a0 itemSize:(struct CGSize { double x0; double x1; } *)a1;
- (void)showDisambiguationControllerWithDataSource:(id)a0 actionType:(id)a1 onController:(id)a2 sourceView:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)contactActionsController:(id)a0 didSelectAction:(id)a1;
- (void)updateContentSize;

@end
