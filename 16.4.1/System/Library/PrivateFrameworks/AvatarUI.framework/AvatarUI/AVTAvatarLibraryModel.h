@class NSArray, AVTViewSessionProvider, AVTAvatarLibraryCreateNewItem, NSString, AVTUIEnvironment, NSMutableArray;
@protocol AVTAvatarLibraryModelDelegate, AVTAvatarStoreInternal;

@interface AVTAvatarLibraryModel : NSObject <AVTAvatarEditorViewControllerDelegate>

@property (readonly, nonatomic) id<AVTAvatarStoreInternal> avatarStore;
@property (readonly, nonatomic) AVTViewSessionProvider *viewSessionProvider;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) AVTAvatarLibraryCreateNewItem *createNewItem;
@property (readonly, nonatomic) NSMutableArray *mutableLibraryItems;
@property (nonatomic) BOOL isCreatingAvatar;
@property (weak, nonatomic) id<AVTAvatarLibraryModelDelegate> delegate;
@property (readonly, nonatomic) NSArray *libraryItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)load;
- (unsigned long long)numberOfRecords;
- (void).cxx_destruct;
- (void)avatarEditorViewController:(id)a0 didFinishWithAvatarRecord:(id)a1;
- (void)avatarEditorViewControllerDidCancel:(id)a0;
- (long long)indexForRecord:(id)a0;
- (id)initWithAvatarStore:(id)a0 avtViewSessionProvider:(id)a1 environment:(id)a2;
- (void)insertItemForRecord:(id)a0 atIndex:(unsigned long long)a1;
- (id)libraryItemsFromAvatarRecords:(id)a0;
- (void)performActionOnItemAtIndex:(unsigned long long)a0;
- (void)presentActionSheetForRecordItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)presentEditor:(id)a0 forCreating:(BOOL)a1;
- (void)presetShareSheetWithRecords:(id)a0 fromItem:(id)a1;
- (void)reloadDataForRecords:(id)a0;
- (void)removeItemForRecordAtIndex:(unsigned long long)a0;
- (void)storeDidChangeNotification:(id)a0;
- (void)updateForCreatedRecord:(id)a0;
- (void)updateForEditedRecord:(id)a0;

@end
