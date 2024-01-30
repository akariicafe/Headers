@class NSNumber, BRCGenerationID, NSString;

@interface BRCLocalStatInfo : BRCStatInfo

@property (readonly, nonatomic) NSNumber *fileID;
@property (readonly, nonatomic) BRCGenerationID *generationID;
@property (readonly, nonatomic) NSNumber *lostStamp;
@property (nonatomic) unsigned char itemScope;
@property (retain, nonatomic) NSString *rawBouncedLogicalName;
@property (readonly, nonatomic) NSNumber *documentID;
@property (readonly, nonatomic) NSNumber *fileID;
@property (readonly, nonatomic) BRCGenerationID *generationID;
@property (readonly, nonatomic) NSString *physicalName;
@property (readonly, nonatomic) NSNumber *tmpBouncedNo;
@property (readonly, nonatomic) NSNumber *stagedFileID;
@property (readonly, nonatomic) NSNumber *stagedFileIDForDB;
@property (readonly, nonatomic) unsigned int stagedGenerationID;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSNumber *processingStamp;
@property (readonly, nonatomic) NSString *logicalNameWithoutLocalBounce;

+ (id)_finderTagsFromRelativePath:(id)a0;
+ (char)_modeFromRelativePath:(id)a0 isPackageFault:(BOOL)a1;

- (void)setFilename:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)logicalName;
- (id)initFromResultSet:(id)a0 pos:(int)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)checkStateWithItemID:(id)a0 logToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1;
- (void)_markAlmostDead;
- (void)_bouncePhysicalNameToRepresentableName;
- (void)_clearFileID;
- (void)_clearGenerationID;
- (void)_clearTmpBouncedNumber;
- (void)_generatedBouncedLogicalFilenameWithBounceNumber:(unsigned long long)a0;
- (void)_markClearedFromStage;
- (void)_markDead;
- (void)_markDeadAsSharedTopLevelItemWithDocumentsItemID:(id)a0;
- (void)_markFound;
- (void)_markLiveFromStageAsFault:(BOOL)a0;
- (void)_markLiveFromStageAsType:(char)a0;
- (void)_markLostAddingBackoffWithMode:(unsigned char)a0 appLibrary:(id)a1;
- (void)_markReserved;
- (void)_markStagedWithFileID:(id)a0 generationID:(unsigned int)a1 documentID:(id)a2;
- (void)_migrateTmpBouncedNameToLocalName;
- (void)_moveItemAsideWithUUIDString;
- (void)_setCKInfo:(id)a0;
- (void)_setItemScope:(unsigned char)a0;
- (void)_setParentID:(id)a0;
- (void)_updateMetadataFromFSAtPath:(id)a0 itemID:(id)a1 parentGlobalID:(id)a2 isPackageFault:(BOOL)a3 readonlyShareChild:(BOOL)a4;
- (void)_updateStatMeta:(id)a0;
- (id)descriptionWithContext:(id)a0 origName:(id)a1;
- (unsigned long long)diffAgainstLocalInfo:(id)a0;
- (id)initAsShareAcceptFaultWithName:(id)a0 mode:(char)a1 isDirectory:(BOOL)a2;
- (id)initWithLocalStatInfo:(id)a0;
- (id)initWithRelativePath:(id)a0 itemID:(id)a1 parentGlobalID:(id)a2;
- (void)setFilename:(id)a0 forcePhysicalName:(id)a1 forceBouncedLogicalName:(id)a2 serverName:(id)a3;
- (void)updateFilenameFromPath:(id)a0;
- (void)updateFromFSAtPath:(id)a0 itemID:(id)a1 parentGlobalID:(id)a2 isPackageFault:(BOOL)a3 readonlyShareChild:(BOOL)a4;
- (void)updateLocationAndMetaFromFSAtPath:(id)a0 itemID:(id)a1 parentGlobalID:(id)a2 isPackageFault:(BOOL)a3 readonlyShareChild:(BOOL)a4;

@end
