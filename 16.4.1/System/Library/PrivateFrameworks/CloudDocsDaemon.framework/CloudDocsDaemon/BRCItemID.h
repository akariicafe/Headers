@class NSString, BRCZoneRowID, BRCALRowID;

@interface BRCItemID : NSObject <NSCopying, NSSecureCoding, PQLValuable> {
    BRCALRowID *_appLibraryRowID;
    BRCZoneRowID *_zoneRowID;
    unsigned char _kind;
    unsigned char _uuid[16];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isNonDesktopRoot;
@property (readonly, nonatomic) BOOL isDocumentsFolder;
@property (readonly, nonatomic) BOOL isSharedZoneRoot;
@property (readonly, nonatomic) NSString *itemIDString;
@property (readonly, nonatomic) NSString *debugItemIDString;
@property (readonly, nonatomic) const char *UTF8String;
@property (readonly, nonatomic) BRCALRowID *appLibraryRowID;
@property (readonly, nonatomic) BRCZoneRowID *sharedZoneRowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { } *)a0 atIndex:(int)a1;
+ (id)newFromSqliteValue:(struct sqlite3_value { } *)a0;
+ (id)documentsItemIDWithAppLibraryRowID:(id)a0;
+ (BOOL)isDocumentsItemIDWithSQLiteValue:(struct sqlite3_value { } *)a0;
+ (BOOL)isRootItemIDWithSQLiteValue:(struct sqlite3_value { } *)a0;
+ (BOOL)isSharedZoneRootItemIDWithSQLiteValue:(struct sqlite3_value { } *)a0;
+ (BOOL)migrateItemIDsToVersion11WithDB:(id)a0 serverTruth:(BOOL)a1;
+ (BOOL)migrateItemIDsToVersion5WithDB:(id)a0 serverTruth:(BOOL)a1;
+ (BOOL)migrateItemIDsToVersion8WithDB:(id)a0 serverTruth:(BOOL)a1;
+ (id)parseMangledItemIDString:(id)a0 mangledID:(id *)a1 etag:(id *)a2 session:(id)a3;
+ (id)shareAliasRecordIDFromTargetItemID:(id)a0 zone:(id)a1 hasDerivedShareAlias:(BOOL)a2;
+ (id)structureRecordPrefixForItemType:(char)a0 targetZoneShared:(BOOL)a1;

- (id)initWithUUID:(const char *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToItemID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithUUIDString:(id)a0;
- (void).cxx_destruct;
- (id)initWithItemID:(id)a0;
- (id)initWithRootObject:(struct RootItemObject { unsigned char x0; union { unsigned int x0; unsigned int x1; } x1; } *)a0;
- (id)_directoryRecordNameWithSession:(id)a0;
- (id)_initAsLibraryRootWithAppLibraryRowID:(id)a0;
- (id)_initAsZoneRootWithZoneRowID:(id)a0;
- (id)contentsRecordIDInZoneID:(id)a0;
- (id)derivedAliasItemIDWithOwnerName:(id)a0;
- (id)directoryReferenceInZone:(id)a0 action:(unsigned long long)a1;
- (id)directoryStructureRecordIDInZone:(id)a0;
- (id)documentStructureRecordIDInZoneID:(id)a0;
- (id)initAsDocumentsWithAppLibraryRowID:(id)a0;
- (id)initWithAliasUUID:(id)a0;
- (id)initWithString:(id)a0 libraryRowID:(id)a1 sharedZoneRowID:(id)a2;
- (id)itemUUIDString;
- (id)pcsChainDocumentStructureReferenceInZoneID:(id)a0;
- (id)pcsChainParentReferenceInZone:(id)a0;
- (id)sideCarRecordIDWithZone:(id)a0;
- (id)sideCarRecordNameWithZone:(id)a0;
- (id)structureRecordIDForItemType:(char)a0 zone:(id)a1 aliasTargetZoneIsShared:(BOOL)a2;
- (id)validatingDirectoryReferenceInZone:(id)a0;
- (id)zoneUniqueItemIDStringWithSession:(id)a0;

@end
