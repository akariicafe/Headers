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

+ (id)newFromSqliteValue:(struct sqlite3_value { } *)a0;
+ (id)newFromSqliteStatement:(struct sqlite3_stmt { } *)a0 atIndex:(int)a1;

- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithRecord:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)setCKInfoFieldsInRecord:(id)a0;
- (void)markMovedToCloudDocsZone;

@end
