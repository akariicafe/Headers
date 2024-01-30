@class NSString, NSArray, NSData, ICAccount, ICFolderCustomNoteSortType, NSManagedObjectContext;

@interface ICAccountProxy : NSObject <ICNoteContainer>

@property (retain) ICAccount *account;
@property (readonly, nonatomic) ICAccount *noteContainerAccount;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
@property (readonly, nonatomic) BOOL isSharedViaICloud;
@property (readonly, nonatomic) BOOL isSharedReadOnly;
@property (readonly, nonatomic) BOOL isAllNotesContainer;
@property (readonly, nonatomic) BOOL canBeSharedViaICloud;
@property (readonly, nonatomic) BOOL supportsEditingNotes;
@property (readonly, nonatomic) BOOL isTrashFolder;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) NSArray *visibleSubFolders;
@property (retain, nonatomic) NSData *subFolderOrderMergeableData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountProxyWithAccount:(id)a0;
+ (id)keyPathsForValuesAffectingVisibleNotesCount;

- (void).cxx_destruct;
- (BOOL)isLeaf;
- (id)predicateForSearchableNotes;
- (BOOL)supportsVisibilityTestingType:(long long)a0;
- (id)predicateForSearchableAttachments;
- (id)predicateForVisibleNotes;
- (id)predicateForPinnedNotes;
- (long long)compare:(id)a0;
- (BOOL)isDeleted;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)titleForNavigationBar;
- (BOOL)noteIsVisible:(id)a0;
- (id)visibleNotes;
- (unsigned long long)visibleNotesCount;
- (id)titleForTableViewCell;
- (BOOL)isModernCustomFolder;
- (void)saveSubFolderMergeableDataIfNeeded;
- (BOOL)mergeWithSubFolderMergeableData:(id)a0;
- (void)updateSubFolderMergeableDataChangeCount;
- (id)customNoteSortTypeValue;
- (id)accountName;
- (id)initWithAccount:(id)a0;
- (id)visibleNoteContainerChildren;

@end
