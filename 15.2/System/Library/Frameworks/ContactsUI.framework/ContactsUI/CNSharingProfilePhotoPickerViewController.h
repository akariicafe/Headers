@class UICollectionView, CNSharingProfileAvatarItemProvider, CNPhotoPickerVariantsManager, UIButton, CNPhotoPickerColorVariant, CNSharingProfilePhotoPickerItem, NSString, CNContact, UICollectionViewFlowLayout, CNSharingProfileAvatarItemProviderConfiguration, NSArray, PRMonogramColor, CNSharingProfileLogger, NSData, UIImageView;
@protocol CNSharingProfilePhotoPickerViewControllerDelegate, AVTAvatarRecord;

@interface CNSharingProfilePhotoPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (nonatomic) BOOL isSmallScreenDevice;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) CNSharingProfileLogger *logger;
@property (retain, nonatomic) UICollectionViewFlowLayout *selectorLayout;
@property (retain, nonatomic) UIImageView *previewView;
@property (retain, nonatomic) UICollectionView *selectorView;
@property (retain, nonatomic) CNSharingProfilePhotoPickerItem *selectedItem;
@property (retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration;
@property (retain, nonatomic) CNSharingProfileAvatarItemProvider *itemProvider;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) UIButton *customizeButton;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) CNPhotoPickerColorVariant *animojiBackgroundColor;
@property (retain, nonatomic) PRMonogramColor *monogramBackgroundColor;
@property (weak, nonatomic) id<CNSharingProfilePhotoPickerViewControllerDelegate> delegate;
@property (retain, nonatomic) PRMonogramColor *monogramColor;
@property (retain, nonatomic) NSData *memojiMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)setupConstraints;
- (id)buildItems;
- (void)reloadItems;
- (double)previewToSelectorSpacing;
- (id)initWithContact:(id)a0 avatarRecord:(id)a1 avatarItemProviderConfiguration:(id)a2 logger:(id)a3;
- (double)previewEdgeSize;
- (void)updateInteritemSpacing;
- (void)updateWithContact:(id)a0 fromFullPhotoPicker:(BOOL)a1;
- (void)updatePreviewForSelectedItem;
- (void)didSelectCustomizeButton:(id)a0;

@end
