@class NSNumber, NSManagedObjectContext, NSString, NSArray, NSData, ICFolderCustomNoteSortType, ICCRDTIdentifierOrderedSetVersionedDocument, CROrderedSet, ICAccount;

@interface ICNoteContainer : ICCloudSyncingObject <ICNoteContainer>

@property (retain, nonatomic) ICAccount *owner;
@property (retain, nonatomic) NSString *accountNameForAccountListSorting;
@property (nonatomic) BOOL isHiddenNoteContainer;
@property (retain, nonatomic) NSString *nestedTitleForSorting;
@property (retain, nonatomic) ICCRDTIdentifierOrderedSetVersionedDocument *subFolderIdentifiersOrderedSetDocument;
@property (nonatomic) int sortOrder;
@property (readonly, nonatomic) CROrderedSet *subFolderIdentifiersOrderedSet;
@property (nonatomic, getter=isSubFolderOrderMergeableDataDirty) BOOL subFolderOrderMergeableDataDirty;
@property (retain, nonatomic) NSNumber *transientNoteCount;
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

+ (id)keyPathsForValuesAffectingCloudAccount;

- (void)willSave;
- (void)writeSubFolderMergeableData;
- (id)cacheKey;
- (void).cxx_destruct;
- (id)predicateForSearchableNotes;
- (BOOL)supportsVisibilityTestingType:(long long)a0;
- (id)predicateForSearchableAttachments;
- (id)cloudAccount;
- (id)predicateForVisibleNotes;
- (id)predicateForPinnedNotes;
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
- (id)accountName;
- (void)willTurnIntoFault;
- (void)willRefresh:(BOOL)a0;

@end
