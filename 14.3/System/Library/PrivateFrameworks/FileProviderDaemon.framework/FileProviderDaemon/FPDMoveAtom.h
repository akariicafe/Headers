@class NSString, FPActionOperationLocator;

@interface FPDMoveAtom : NSObject

@property (readonly, nonatomic) unsigned char kind;
@property (readonly, nonatomic) FPActionOperationLocator *root;
@property (readonly, nonatomic) FPActionOperationLocator *source;
@property (readonly, nonatomic) NSString *targetName;
@property (readonly, nonatomic) FPActionOperationLocator *targetFolder;
@property (readonly, nonatomic) BOOL useAtomicMove;
@property (readonly, nonatomic) BOOL useDiskWriter;
@property (readonly, nonatomic) unsigned long long materializeOption;
@property (readonly, nonatomic) unsigned long long targetMaterializeOption;

+ (id)atomForMoving:(id)a0 toTargetFolder:(id)a1 as:(id)a2 root:(id)a3 atomically:(BOOL)a4 sourceMaterializeOption:(unsigned long long)a5 targetMaterializeOption:(unsigned long long)a6 useDiskWriter:(BOOL)a7;
+ (id)atomForPostFolderUnderRoot:(id)a0 atomically:(BOOL)a1 useDiskWriter:(BOOL)a2;

- (void).cxx_destruct;
- (id)description;
- (BOOL)shouldAccountForDownloadOfSourceItemForMoveInfo:(id)a0 extensionManager:(id)a1;
- (id)initWithKind:(unsigned char)a0 source:(id)a1 targetName:(id)a2 targetFolder:(id)a3 root:(id)a4 atomically:(BOOL)a5 sourceMaterializeOption:(unsigned long long)a6 targetMaterializeOption:(unsigned long long)a7 useDiskWriter:(BOOL)a8;

@end
