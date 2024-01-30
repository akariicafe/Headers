@class UIView, CNVisualIdentityEditablePrimaryAvatarViewController, NSArray, CNPhotoPickerVariantsManager, CNPhotoPickerProviderItem, NSString, CNVisualIdentityItemEditorSegmentedControl, UICollectionView, NSLayoutConstraint;
@protocol CNVisualIdentityItemEditorViewControllerDelegate;

@interface CNVisualIdentityItemEditorViewController : UIViewController <UITextFieldDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CNPhotoPickerProviderItemDelegate, CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate>

@property (retain, nonatomic) CNVisualIdentityEditablePrimaryAvatarViewController *editableAvatarViewController;
@property (retain, nonatomic) CNVisualIdentityItemEditorSegmentedControl *segmentedControl;
@property (retain, nonatomic) NSLayoutConstraint *avatarViewSizeConstraint;
@property (retain, nonatomic) NSLayoutConstraint *avatarViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *segmentedControlHeightConstraint;
@property (retain, nonatomic) UICollectionView *styleCollectionView;
@property (retain, nonatomic) UIView *styleDividerView;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) NSArray *variantProviderItems;
@property (retain, nonatomic) CNPhotoPickerProviderItem *providerItem;
@property (weak, nonatomic) id<CNVisualIdentityItemEditorViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)keyboardWillShow:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)adjustAvatarViewConstraintsForKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)beginEditingAvatar;
- (void)didTapCancel;
- (void)didTapDone;
- (void)didTapEditableAvatar:(id)a0;
- (void)didTapSegmentedControl:(id)a0;
- (void)editableAvatarViewController:(id)a0 didUpdateWithProviderItem:(id)a1;
- (BOOL)editableAvatarViewControllerShouldBecomeFirstResponder:(id)a0;
- (double)editableAvatarViewEdgeLength;
- (double)editorViewBottomYForAvatarSize:(double)a0 withContainerTopMargin:(double)a1;
- (BOOL)editorViewOverlapsWindowBasedKeyboardRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)fontSizeForContainerSize:(double)a0;
- (void)forceEmojiKeyboardIfNeeded;
- (void)generateProviderItems;
- (void)hideStyleCollectionView;
- (id)initWithProviderItem:(id)a0 variantsManager:(id)a1;
- (BOOL)isEmojiProviderItemType;
- (long long)numberOfItemsPerRow;
- (void)providerItemDidUpdate:(id)a0;
- (double)segmentedControlTopMargin;
- (void)setupBarButtonItems;
- (void)setupEditableAvatarViewController;
- (void)setupSegmentedControl;
- (void)setupStyleCollectionView;
- (void)setupViewWithProviderItem:(id)a0;
- (BOOL)shouldBeginEditing;
- (BOOL)shouldShowStyleCollectionView;
- (double)styleContainerTopMargin;
- (void)switchEditorToMode:(unsigned long long)a0;
- (double)textFieldFontSize;
- (void)updateDoneButtonEnabledStateForText:(id)a0;
- (void)updateFlowLayoutItemSize;
- (id)updatedProviderItem;

@end
