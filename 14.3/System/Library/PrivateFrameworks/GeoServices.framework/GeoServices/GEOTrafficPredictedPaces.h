@class GEOTrafficPath, PBDataReader;

@interface GEOTrafficPredictedPaces : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _encodedPaces;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _secondsInFutures;
    GEOTrafficPath *_path;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_encodedPaces : 1; unsigned char read_secondsInFutures : 1; unsigned char read_path : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long secondsInFuturesCount;
@property (readonly, nonatomic) unsigned int *secondsInFutures;
@property (readonly, nonatomic) unsigned long long encodedPacesCount;
@property (readonly, nonatomic) unsigned int *encodedPaces;
@property (readonly, nonatomic) BOOL hasPath;
@property (retain, nonatomic) GEOTrafficPath *path;

+ (BOOL)isValid:(id)a0;

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
- (id)initWithDictionary:(id)a0;
- (void)addSecondsInFuture:(unsigned int)a0;
- (void)addEncodedPace:(unsigned int)a0;
- (void)clearSecondsInFutures;
- (unsigned int)secondsInFutureAtIndex:(unsigned long long)a0;
- (void)clearEncodedPaces;
- (unsigned int)encodedPaceAtIndex:(unsigned long long)a0;
- (void)setSecondsInFutures:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setEncodedPaces:(unsigned int *)a0 count:(unsigned long long)a1;

@end
