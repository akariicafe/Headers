@class NSString, NSURL, BRCRelativePath, BRCServerItem, BRCDocumentItem, BRCAccountSession, BRCPQLConnection, BRCLocalItem;

@interface BRCURLToItemLookup : NSObject <NSSecureCoding> {
    union { struct { unsigned char parentItem : 1; unsigned char relpath : 1; unsigned char pathMatch : 1; unsigned char faultedMatch : 1; unsigned char byIDMatch : 1; unsigned char reservedMatch : 1; unsigned char parentPath : 1; } ; unsigned int value; } _hasFetched;
    BRCRelativePath *__relpath;
    BOOL _allowAppLibraryRoot;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BRCPQLConnection *db;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BRCAccountSession *session;
@property (readonly, nonatomic) struct { id x0; id x1; id x2; id x3; unsigned long long x4; } byIDMatch;
@property (readonly, nonatomic) BRCLocalItem *byIDLocalItem;
@property (readonly, nonatomic) BRCServerItem *byIDServerItem;
@property (readonly, nonatomic) BRCRelativePath *relpath;
@property (readonly, nonatomic) unsigned long long byIDDiffs;
@property (readonly, nonatomic) struct { id x0; id x1; id x2; id x3; unsigned long long x4; } byPathMatch;
@property (readonly, nonatomic) BRCLocalItem *byPathLocalItem;
@property (readonly, nonatomic) BRCServerItem *byPathServerItem;
@property (readonly, nonatomic) BRCRelativePath *byPathRelpath;
@property (readonly, nonatomic) unsigned long long byPathDiffs;
@property (readonly, nonatomic) struct { id x0; id x1; id x2; id x3; unsigned long long x4; } faultedMatch;
@property (readonly, nonatomic) BRCDocumentItem *faultedLocalItem;
@property (readonly, nonatomic) BRCServerItem *faultedServerItem;
@property (readonly, nonatomic) BRCRelativePath *faultedRelpath;
@property (readonly, nonatomic) unsigned long long faultedDiffs;
@property (readonly, nonatomic) struct { id x0; id x1; id x2; id x3; unsigned long long x4; } reservedMatch;
@property (readonly, nonatomic) BRCLocalItem *reservedLocalItem;
@property (readonly, nonatomic) BRCServerItem *reservedServerItem;
@property (readonly, nonatomic) BRCRelativePath *parentRelpath;
@property (readonly, nonatomic) BRCLocalItem *parentItem;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *parentPath;
@property (readonly, nonatomic) unsigned short pathType;

- (void)tryToUpdateItemInNamespace:(unsigned char)a0 withDstLookup:(id)a1;
- (BOOL)_applyOrDownloadThumbnailIfNecessary:(id)a0 si:(id)a1 url:(id)a2 updatedAddition:(BOOL *)a3 applySchedulerState:(int *)a4;
- (BOOL)_applyOrEvictLosersIfNecessary:(id)a0 si:(id)a1 url:(id)a2 addedLosers:(id)a3 removedLosers:(id)a4 updatedAddition:(BOOL *)a5 applySchedulerState:(int *)a6;
- (id)initWithURL:(id)a0 allowAppLibraryRoot:(BOOL)a1 session:(id)a2 db:(id)a3;
- (void)_fetchIDMatch;
- (BOOL)_canUpdatePathMatch:(const struct { id x0; id x1; id x2; id x3; unsigned long long x4; } *)a0 hasAdditionsToApply:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_removeDirectory:(id)a0 atPath:(id)a1 error:(id *)a2;
- (BOOL)_appliedOrDownloadContentIfNecessary:(id)a0 si:(id)a1 applySchedulerState:(int *)a2;
- (void)clearByIDItem;
- (void)refreshByPathDiffs;
- (void)handleReservedPathMatchesIfNeeded;
- (id)description;
- (void)matchLookupItemsWithDisk;
- (void)closePaths;
- (void)_fetchReservedPathMatch;
- (id)initWithURL:(id)a0 session:(id)a1;
- (void)clearFaultedItem;
- (void).cxx_destruct;
- (BOOL)resolveParentAndKeepOpenMustExist:(BOOL)a0 errcode:(int *)a1;
- (void)clearReservedItem;
- (void)clearByPathItem;
- (BOOL)copyItemAtURLToGenstore:(id)a0 forItem:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (void)_moveMissingItemAsideInNamespace:(unsigned char)a0;
- (void)markPathMatchLostIfLocationDoesntMatch:(struct { id x0; id x1; id x2; id x3; unsigned long long x4; } *)a0;
- (struct { id x0; id x1; id x2; id x3; unsigned long long x4; })_pathMatchInNamespace:(unsigned char)a0;
- (void)_fetchPathMatch;
- (void)_fetchRelPath;
- (void)_clearNamespace:(unsigned char)a0;
- (void)didApplyChangesAtPath:(id)a0 filename:(id)a1 li:(id)a2 si:(id)a3;
- (void)refreshByIDDiffs;
- (BOOL)trashItemIfNecessary:(id)a0 atURL:(id)a1 error:(id *)a2;
- (BOOL)_bounceBouncesHiddenByFault:(id)a0;
- (void)_fetchFaultedMatch;
- (BOOL)_bouncePathMatchIfNecessaryWithLookup:(id)a0 localItem:(id)a1 serverItem:(id)a2 bounceNamespace:(unsigned char)a3 applyNamespace:(unsigned char)a4;
- (void)refreshFaultedDiffs;
- (BOOL)tryToDeleteItemInNamespace:(unsigned char)a0;
- (BOOL)resolveAndKeepOpenWithError:(id *)a0;
- (id)initWithURL:(id)a0 allowAppLibraryRoot:(BOOL)a1 session:(id)a2;

@end
