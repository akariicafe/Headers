@class NSString, NSMutableArray, PBDataReader;

@interface GEOWiFiQualitySearchResultTile : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_ess;
    NSString *_etag;
    unsigned long long _tileKey;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_tileKey : 1; unsigned char read_ess : 1; unsigned char read_etag : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasTileKey;
@property (nonatomic) unsigned long long tileKey;
@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) NSMutableArray *ess;

+ (Class)essType;
+ (BOOL)isValid:(id)a0;

- (void)addEss:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)essAtIndex:(unsigned long long)a0;
- (unsigned long long)essCount;
- (id)initWithDictionary:(id)a0;
- (void)clearEss;

@end
