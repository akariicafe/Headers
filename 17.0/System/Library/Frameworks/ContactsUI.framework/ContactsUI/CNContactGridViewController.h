@class UIColor, CNContactGridViewLayout, NSArray, NSIndexPath, NSString, NSMutableDictionary, NSDictionary, NSObject, CNContactFormatter;
@protocol CNContactDataSource, CNKeyDescriptor, CNContactGridViewControllerDelegate;

@interface CNContactGridViewController : UICollectionViewController <CNContactDataSourceDelegate, CNAvatarViewDelegate, CNQuickActionsViewDelegate>

@property (retain) CNContactGridViewLayout *gridLayout;
@property (copy) NSIndexPath *indexPathOfContactWithExpandedInlineActions;
@property (retain, nonatomic) NSMutableDictionary *preloadedActionsManagers;
@property (weak, nonatomic) id<CNContactGridViewControllerDelegate> delegate;
@property (retain, nonatomic) NSObject<CNContactDataSource> *dataSource;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (nonatomic) BOOL inlineActionsEnabled;
@property (copy, nonatomic) NSArray *inlineActionsCategories;
@property (nonatomic) long long indexOfContactWithExpandedInlineActions;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) struct CGSize { double width; double height; } avatarSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } avatarMargins;
@property (nonatomic) long long monogrammerStyle;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSDictionary *nameTextAttributes;
@property (readonly, nonatomic) id<CNKeyDescriptor> descriptorForRequiredKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)contactDataSourceDidChange:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)_contactAtIndexPath:(id)a0;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)_indexPathForGlobalIndex:(long long)a0;
- (void)_configureCell:(id)a0;
- (void)_updateItemSize;
- (long long)_globalIndexForIndexPath:(id)a0;
- (void)actionsView:(id)a0 didPerformAction:(id)a1;
- (void)actionsView:(id)a0 willShowActions:(id)a1;
- (void)preloadInlineActionsForContactsAtIndexes:(id)a0;
- (void)setIndexOfContactWithExpandedInlineActions:(long long)a0 animated:(BOOL)a1;
- (void)setIndexPathOfContactWithExpandedInlineActions:(id)a0 animated:(BOOL)a1;
- (id)viewControllerForActionsView:(id)a0;
- (void)willBeginPreviewInteractionForAvatarView:(id)a0;

@end
