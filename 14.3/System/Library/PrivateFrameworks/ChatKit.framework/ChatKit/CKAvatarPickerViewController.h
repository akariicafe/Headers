@class CKAvatarTitleCollectionReusableView, NSString, CKConversation, CNContactStore, CKAvatarPickerLayout, CNGroupAvatarViewController, NSMapTable, UICollectionView;

@interface CKAvatarPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CNAvatarViewDelegate, CKAvatarPickerLayoutDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CNGroupAvatarViewController *groupAvatarViewController;
@property (retain, nonatomic) CKAvatarPickerLayout *layout;
@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) CNContactStore *suggestionsEnabledContactStore;
@property (retain, nonatomic) CKAvatarTitleCollectionReusableView *titleView;
@property (retain, nonatomic) NSMapTable *visibleTitleViews;
@property (nonatomic) long long style;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleViewFrame;
@property (nonatomic) long long indicatorType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)hasTitle;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateContentsForConversation:(id)a0;
- (void)_chatPropertiesChanged:(id)a0;
- (void)loadView;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void)updateGroupAvatarView;
- (void)_handleAddressBookChange:(id)a0;
- (void)setAvatarPickerActive:(BOOL)a0;
- (id)initWithConversation:(id)a0;
- (void)_handleGroupNameChange:(id)a0;
- (void)_handleConversationIsFilteredChange:(id)a0;
- (unsigned long long)_preferredAvatarLayoutMode;
- (id)avatarDisplayName;
- (id)_groupAvatarViewControllerRequiredContactKeys;
- (void)sendUpdatedRecentParticipantsToContacts;
- (BOOL)chatIsReportedAsSpam;
- (id)_titleSupplementaryViewAtIndexPath:(id)a0;
- (id)_cutoutSupplementaryViewAtIndexPath:(id)a0;
- (int)chatWasDetectedAsSMSSpam;
- (id)_configureCollectionView:(id)a0 bannerViewCellForItemAtIndexPath:(id)a1;
- (id)_configureCollectionView:(id)a0 groupIdentityCellForItemAtIndexPath:(id)a1;
- (BOOL)avatarPickerLayoutShouldShowTitle:(id)a0;
- (id)_configureCollectionView:(id)a0 avatarViewCellForItemAtIndexPath:(id)a1;
- (id)_contactNameSupplementaryViewAtIndexPath:(id)a0;
- (void)_chatItemsDidChange:(id)a0;
- (void)_setTitle:(id)a0 animated:(BOOL)a1;
- (void)_handleConversationRecipientsDidChange:(id)a0;
- (void)_animateOutTitleView;
- (void)_animateInTitleView;
- (id)avatarView:(id)a0 orderedPropertiesForProperties:(id)a1 category:(id)a2;

@end
