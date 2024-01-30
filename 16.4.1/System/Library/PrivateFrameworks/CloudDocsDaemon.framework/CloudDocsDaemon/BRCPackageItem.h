@class NSString, BRCGenerationID, NSData;

@interface BRCPackageItem : NSObject <PQLResultSetInitializer> {
    NSString *_symlinkContent;
    NSData *_contentSignature;
    BOOL _isDirty;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long packageDocumentID;
@property (readonly, nonatomic) unsigned long long fileID;
@property (readonly, nonatomic) BRCGenerationID *generationID;
@property (readonly, nonatomic) NSString *pathInPackage;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) long long assetRank;
@property (readonly, nonatomic) BOOL isFile;
@property (readonly, nonatomic) BOOL isSymLink;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) long long mtime;
@property (readonly, nonatomic) long long size;
@property (readonly, nonatomic) char mode;
@property (readonly, nonatomic) NSData *contentSignature;
@property (readonly, nonatomic) NSData *quarantineInfo;
@property (readonly, nonatomic) NSString *symlinkContent;
@property (readonly, nonatomic) NSData *xattrSignature;

+ (BOOL)dumpSession:(id)a0 toContext:(id)a1 db:(id)a2 error:(id *)a3;
+ (BOOL)_deleteSnapshotAtPath:(id)a0 error:(id *)a1;
+ (BOOL)_rescanDirectoryInPackage:(id)a0 error:(id *)a1;
+ (long long)aggregatePackageSizeForPackageID:(unsigned int)a0 db:(id)a1;
+ (long long)largestPackageItemSizeInDocumentID:(unsigned int)a0 session:(id)a1;
+ (BOOL)packageChangedAtRelativePath:(id)a0;
+ (id)packageItemForRelpath:(id)a0;
+ (id)packageItemWithDocumentID:(unsigned int)a0 relativePath:(id)a1 db:(id)a2;
+ (id)packageItemsForDocumentID:(unsigned int)a0 order:(unsigned long long)a1 db:(id)a2;
+ (id)packageItemsForFileObjectID:(id)a0 order:(unsigned long long)a1 db:(id)a2;
+ (id)packageItemsForItem:(id)a0 order:(unsigned long long)a1;
+ (BOOL)updateSignaturesForFilesInItem:(id)a0 fromCKPackage:(id)a1 error:(id *)a2;
+ (BOOL)updateSnapshotAtPath:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initFromPQLResultSet:(id)a0 error:(id *)a1;
- (id)initWithRelativePath:(id)a0 markDirty:(BOOL)a1;
- (void)_setXattrs:(id)a0 session:(id)a1;
- (BOOL)changedAtRelpath:(id)a0;
- (id)initWithPBItem:(id)a0 forLocalItem:(id)a1;
- (BOOL)saveToDBWithSession:(id)a0;
- (BOOL)setDirty:(BOOL)a0 session:(id)a1;

@end
