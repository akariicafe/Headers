@class NSString, NSArray, CNPhotoPickerVariantsManager, CNVisualIdentity, CNContactViewCache, NSMutableArray, NSIndexPath;
@protocol CNPhotoPickerProviderGroupDelegate, AVTAvatarStore;

@interface CNPhotoPickerDataSource : NSObject <CNPhotoPickerProviderGroupDelegate>

@property (readonly, nonatomic) NSArray *providerGroups;
@property (retain, nonatomic) NSMutableArray *groupIsCollapsedState;
@property (nonatomic) BOOL allowsPhotoLibraryAccess;
@property (retain, nonatomic) CNVisualIdentity *visualIdentity;
@property (retain, nonatomic) NSIndexPath *activePhotoIndexPath;
@property (readonly, nonatomic) CNContactViewCache *contactViewCache;
@property (weak, nonatomic) id<CNPhotoPickerProviderGroupDelegate> delegate;
@property (readonly, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (readonly, nonatomic) id<AVTAvatarStore> avatarStore;
@property (nonatomic) unsigned long long itemsPerRow;
@property (retain, nonatomic) NSArray *emojiSuggestionItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarStore;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (void)photoPickerProviderGroupDidUpdate:(id)a0;
- (id)actionTitleForSection:(long long)a0;
- (void)photoPickerProviderGroup:(id)a0 didUpdateItem:(id)a1;
- (long long)sectionIndexForProviderGroupType:(long long)a0;
- (id)initWithVisualIdentity:(id)a0 contactViewCache:(id)a1 photoPickerConfiguration:(id)a2;
- (id)injectedItemsGroup;
- (id)initWithVisualIdentity:(id)a0 contactViewCache:(id)a1 providerGroups:(id)a2 avatarStore:(id)a3;
- (id)suggestionsGroup;
- (void)loadProviderGroupsItemsForSize:(struct CGSize { double x0; double x1; })a0 itemsPerRow:(double)a1 scale:(double)a2 RTL:(BOOL)a3;
- (long long)sectionIndexForProviderGroup:(id)a0;
- (id)indexPathsToReloadForUpdatedGroup:(id)a0;
- (BOOL)isItemAtIndexPathAddItem:(id)a0;
- (id)providerGroupAtSection:(long long)a0;
- (id)providerGroupAtIndexPath:(id)a0;
- (id)providerItemAtIndexPath:(id)a0;
- (id)indexOfAddedItem:(id)a0 inGroupOfType:(long long)a1;
- (id)monogramProviderDefaultItemWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)monogramProviderMonogramItemWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)findActiveIndexPathInGroup:(id)a0 withImageData:(id)a1;
- (void)updateGroupCollapsedStateForSection:(long long)a0;
- (id)uniqueEmojiSuggestionItems:(id)a0;
- (id)removeItem:(id)a0;
- (void).cxx_destruct;
- (id)titleForSection:(long long)a0;

@end
