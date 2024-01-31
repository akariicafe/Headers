@class CNPhotoPickerProviderItem, CNPhotoPickerVariantsManager, UICollectionView, NSArray, NSLayoutConstraint, CNVisualIdentityEditablePrimaryAvatarViewController, NSString;
@protocol CNVisualIdentityAvatarStyleEditorViewControllerDelegate;

@interface CNVisualIdentityAvatarStyleEditorViewController : UIViewController <CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *styleCollectionView;
@property (retain, nonatomic) NSLayoutConstraint *avatarViewSizeConstraint;
@property (retain, nonatomic) NSLayoutConstraint *avatarViewTopConstraint;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) NSArray *variantProviderItems;
@property (readonly, nonatomic) CNPhotoPickerProviderItem *providerItem;
@property (readonly, nonatomic) CNVisualIdentityEditablePrimaryAvatarViewController *editableAvatarViewController;
@property (weak, nonatomic) id<CNVisualIdentityAvatarStyleEditorViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)beginEditingAvatar;
- (double)calculateSectionSideInset;
- (void)didTapEditableAvatar:(id)a0;
- (void)dismissEmojiKeyboardIfNeeded;
- (void)dismissTextKeyboardIfNeeded;
- (void)editableAvatarViewController:(id)a0 didUpdateWithProviderItem:(id)a1;
- (BOOL)editableAvatarViewControllerShouldBecomeFirstResponder:(id)a0;
- (void)generateProviderItems;
- (id)initWithProviderItem:(id)a0 variantsManager:(id)a1;
- (BOOL)isEmojiProviderItemType;
- (void)setupEditableAvatarViewController;
- (void)setupStyleCollectionView;
- (BOOL)shouldBeginEditing;
- (id)updatedProviderItem;

@end
