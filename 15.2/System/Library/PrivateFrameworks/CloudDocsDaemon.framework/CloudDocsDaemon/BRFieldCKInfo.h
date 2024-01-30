@class NSString;

@interface BRFieldCKInfo : PBCodable <PQLValuable, NSCopying> {
    struct { unsigned char knownToServer : 1; unsigned char wasCached : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasKnownToServer;
@property (nonatomic) BOOL knownToServer;
@property (nonatomic) BOOL hasWasCached;
@property (nonatomic) BOOL wasCached;
@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) BOOL hasEtagBeforeCrossZoneMove;
@property (retain, nonatomic) NSString *etagBeforeCrossZoneMove;

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { } *)a0 atIndex:(int)a1;
+ (id)newFromSqliteValue:(struct sqlite3_value { } *)a0;

- (id)initWithRecord:(id)a0;
- (void)setCKInfoFieldsInRecord:(id)a0;
- (void)clearCrossZoneMoveEtag;
- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)markCrossZoneMoved;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)revertEtagsForOldZoneTombstone;
- (id)dictionaryRepresentation;

@end
