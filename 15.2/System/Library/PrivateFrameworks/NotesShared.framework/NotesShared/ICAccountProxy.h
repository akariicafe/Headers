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
@property (readonly, nonatomic) BOOL isSystemPaperFolder;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) NSArray *visibleNotes;
@property (readonly, nonatomic) NSArray *visibleSubFolders;
@property (retain, nonatomic) NSData *subFolderOrderMergeableData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountProxyWithAccount:(id)a0;
+ (id)keyPathsForValuesAffectingVisibleNotesCount;

- (BOOL)noteIsVisible:(id)a0;
- (id)predicateForPinnedNotes;
- (long long)compare:(id)a0;
- (id)titleForNavigationBar;
- (void)updateSubFolderMergeableDataChangeCount;
- (void)saveSubFolderMergeableDataIfNeeded;
- (unsigned long long)visibleNotesCount;
- (BOOL)isModernCustomFolder;
- (BOOL)mergeWithSubFolderMergeableData:(id)a0;
- (id)predicateForVisibleNotes;
- (id)accountName;
- (id)predicateForSearchableNotes;
- (id)initWithAccount:(id)a0;
- (BOOL)supportsVisibilityTestingType:(long long)a0;
- (BOOL)isLeaf;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)titleForTableViewCell;
- (id)predicateForSearchableAttachments;
- (id)customNoteSortTypeValue;
- (BOOL)isDeleted;
- (id)visibleNoteContainerChildren;
- (void).cxx_destruct;

@end
