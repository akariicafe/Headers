@class NSString, BRCDocumentItem, BRCDirectoryItem, BRCAliasItem;
@protocol BRCFSRooted;

@interface BRCSymlinkItem : BRCLocalItem

@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) BRCDirectoryItem<BRCFSRooted> *asFSRoot;
@property (readonly, nonatomic) NSString *symlinkTarget;

- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (id)asSymlink;
- (id)_initWithLocalItem:(id)a0;
- (unsigned long long)diffAgainstLocalItem:(id)a0;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (void)readTargetFromRelativePathAndSyncUp:(id)a0;
- (BOOL)isSymLink;
- (void).cxx_destruct;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (id)descriptionWithContext:(id)a0;

@end
