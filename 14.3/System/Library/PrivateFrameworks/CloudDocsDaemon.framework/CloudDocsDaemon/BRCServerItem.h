@class BRCSharedServerItem, BRCVersion, BRCUserRowID, BRCAccountSession, BRServerMetrics, BRCServerZone, NSString, BRCPQLConnection, BRCServerStatInfo, BRCItemID, BRCItemGlobalID, BRCClientZone, BRFieldCKInfo;

@interface BRCServerItem : NSObject <BRCItem> {
    BRCServerZone *_zone;
    BRCPQLConnection *_db;
    BRFieldCKInfo *_sideCarCKInfo;
    BOOL _needsInsert;
    unsigned int _pcsChainState;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BRCSharedServerItem *asSharedItem;
@property (readonly, nonatomic) long long rank;
@property (readonly, nonatomic) NSString *originalName;
@property (readonly, nonatomic) BRCServerStatInfo *st;
@property (readonly, nonatomic) BRCVersion *latestVersion;
@property (readonly, nonatomic) BRServerMetrics *serverMetrics;
@property (readonly, nonatomic) NSString *symlinkTarget;
@property (readonly, nonatomic) long long directoryMtime;
@property (readonly, nonatomic) BOOL isDead;
@property (readonly, nonatomic) BOOL isLive;
@property (readonly, nonatomic) BOOL isBRAlias;
@property (readonly, nonatomic) BOOL isPackage;
@property (readonly, nonatomic) BOOL isDocument;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) BOOL isFSRoot;
@property (readonly, nonatomic) BOOL isZoneRoot;
@property (readonly, nonatomic) BOOL isSymLink;
@property (readonly, nonatomic) BOOL isFinderBookmark;
@property (readonly, nonatomic) BOOL isOwnedByMe;
@property (readonly, nonatomic) BOOL isSharedByMe;
@property (readonly, nonatomic) BOOL hasShareIDAndIsOwnedByMe;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isSharedToMe;
@property (readonly, nonatomic) BOOL isSharedToMeTopLevelItem;
@property (readonly, nonatomic) BOOL isSharedToMeChildItem;
@property (readonly, nonatomic) BOOL isTopLevelSharedItem;
@property (readonly, nonatomic) BOOL isChildSharedItem;
@property (readonly, nonatomic) BRCItemID *itemID;
@property (readonly, nonatomic) BRCItemGlobalID *itemGlobalID;
@property (readonly, nonatomic) BRCUserRowID *ownerKey;
@property (readonly, nonatomic) BRCAccountSession *session;
@property (readonly, nonatomic) BRCServerZone *serverZone;
@property (readonly, nonatomic) BRCClientZone *clientZone;
@property (nonatomic) unsigned long long sharingOptions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithContext:(id)a0;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (id)newLocalItemWithServerZone:(id)a0 dbRowID:(unsigned long long)a1;
- (id)sideCarInfo;
- (id)parentItemOnFS;
- (id)parentItemIDOnFS;
- (id)parentZoneOnFS;
- (BOOL)validateLoggingToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (id)aliasTargetClientZone;
- (unsigned int)pcsChainState;
- (id)parentItemIDOnServer;
- (id)initWithServerItem:(id)a0;
- (id)initFromPQLResultSet:(id)a0 serverZone:(id)a1 error:(id *)a2;
- (id)appLibraryForRootItem;
- (id)parentLocalItemOnFS;
- (id)aliasTargetAppLibrary;
- (id)aliasTargetItemID;

@end
