@class GEOPlaceResult, PBDataReader;

@interface GEOCluster : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _indexs;
    GEOPlaceResult *_container;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_indexs : 1; unsigned char read_container : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasContainer;
@property (retain, nonatomic) GEOPlaceResult *container;
@property (readonly, nonatomic) unsigned long long indexsCount;
@property (readonly, nonatomic) int *indexs;

+ (BOOL)isValid:(id)a0;

- (void)clearSensitiveFields;
- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearIndexs;
- (int)indexAtIndex:(unsigned long long)a0;
- (void)setIndexs:(int *)a0 count:(unsigned long long)a1;
- (id)initWithDictionary:(id)a0;
- (void)addIndex:(int)a0;

@end
