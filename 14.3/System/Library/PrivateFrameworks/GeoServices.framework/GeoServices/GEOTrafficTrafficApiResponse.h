@class PBDataReader, NSMutableArray, GEOTrafficResponseMetaData;

@interface GEOTrafficTrafficApiResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _responseId;
    GEOTrafficResponseMetaData *_metaData;
    NSMutableArray *_trafficSnapshots;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_responseId : 1; unsigned char read_metaData : 1; unsigned char read_trafficSnapshots : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasResponseId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } responseId;
@property (readonly, nonatomic) BOOL hasMetaData;
@property (retain, nonatomic) GEOTrafficResponseMetaData *metaData;
@property (retain, nonatomic) NSMutableArray *trafficSnapshots;

+ (Class)trafficSnapshotsType;
+ (BOOL)isValid:(id)a0;

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
- (id)initWithDictionary:(id)a0;
- (void)addTrafficSnapshots:(id)a0;
- (unsigned long long)trafficSnapshotsCount;
- (void)clearTrafficSnapshots;
- (id)trafficSnapshotsAtIndex:(unsigned long long)a0;

@end
