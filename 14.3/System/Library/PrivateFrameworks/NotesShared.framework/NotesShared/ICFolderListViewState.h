@class NSCountedSet, NSString, NSMutableSet, NSMutableArray, NSNumber;

@interface ICFolderListViewState : NSObject

@property (retain, nonatomic) NSMutableArray *accounts;
@property (retain, nonatomic) NSCountedSet *folderNamesCountedSet;
@property (retain, nonatomic) NSNumber *customFoldersExistValue;
@property (retain, nonatomic) NSMutableSet *expandedFolderIdentifiers;
@property (retain, nonatomic) NSMutableSet *collapsedAccountIdentifiers;
@property (retain, nonatomic) NSMutableSet *collapsedLegacyAccountIdentifiers;
@property (nonatomic) BOOL overrideCollapsed;
@property (copy, nonatomic) NSString *overrideCollapsedFolder;
@property (nonatomic) BOOL showSharedFoldersOnly;
@property (nonatomic) BOOL showFoldersThatCanMoveAddOrDeleteContentsOnly;
@property (readonly, nonatomic) BOOL customFoldersExist;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)getModernAccountFolderListType:(id)a0;
- (void)addFolderListItem:(id)a0;
- (void)invalidateDerivedFolderState;
- (unsigned long long)getLegacyAccountFolderListType:(id)a0;
- (id)indexesOfICAccounts;
- (id)indexesOfLegacyAccounts;
- (void)addICAccount:(id)a0 includingTrash:(BOOL)a1 alwaysIncludeAccountProxy:(BOOL)a2;
- (unsigned long long)countOfAccounts;
- (id)description;
- (void)addICAccounts:(id)a0 forMovingFolder:(id)a1;
- (void)addLegacyAccount:(id)a0 includeAllNotesFolder:(BOOL)a1;
- (unsigned long long)countOfICAccounts;
- (unsigned long long)indexOfICAccount:(id)a0;
- (unsigned long long)countOfLegacyAccounts;
- (void)removeICAccounts;
- (void)removeLegacyAccounts;
- (unsigned long long)countOfItemsInAccountAtIndex:(unsigned long long)a0;
- (id)accountItemAtIndex:(unsigned long long)a0;
- (id)indexPathOfNoteContainer:(id)a0;
- (void)folderMovedFromOldFolder:(id)a0 toNewFolder:(id)a1;
- (id)itemAtIndexPath:(id)a0;

@end
