@class CNMeCardSharingOnboardingAvatarCarouselItem, NSArray, NSString, CNSharingProfileLogger, CNContact, CNMeCardSharingOnboardingAvatarCarouselLayout, UICollectionView, PRMonogramColor;
@protocol AVTAvatarRecord, CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate;

@interface CNMeCardSharingOnboardingAvatarCarouselViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselLayout *layout;
@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *photoPickerItem;
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *animojiItem;
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *photoItem;
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *monogramItem;
@property (readonly, nonatomic) CNSharingProfileLogger *logger;
@property (weak, nonatomic) id<CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate> delegate;
@property (readonly, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *selectedItem;
@property (retain, nonatomic) PRMonogramColor *monogramColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)standardItems;
- (id)itemsForNoAnimojiAndNoPhoto;
- (id)initWithContact:(id)a0 avatarRecord:(id)a1 logger:(id)a2;
- (void)reloadForUpdatedContactPhoto;
- (void)reloadForUpdatedMonogram;
- (id)contactImageItemWithContact:(id)a0;
- (id)monogramImageItemWithContact:(id)a0;
- (id)animojiItemWithRecord:(id)a0;
- (void)notifyDelegateOfUpdateToCenterMostItem;
- (void)scrollToItemAtIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)buildItems;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
