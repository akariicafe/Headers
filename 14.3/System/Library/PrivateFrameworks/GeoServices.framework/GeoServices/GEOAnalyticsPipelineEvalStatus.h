@class NSMutableArray, PBDataReader;

@interface GEOAnalyticsPipelineEvalStatus : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_inflightTypeCounts;
    NSMutableArray *_shadowTypeCounts;
    NSMutableArray *_storedTypeCounts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _evalModeEnabled;
    struct { unsigned char has_evalModeEnabled : 1; unsigned char read_inflightTypeCounts : 1; unsigned char read_shadowTypeCounts : 1; unsigned char read_storedTypeCounts : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasEvalModeEnabled;
@property (nonatomic) BOOL evalModeEnabled;
@property (retain, nonatomic) NSMutableArray *storedTypeCounts;
@property (retain, nonatomic) NSMutableArray *inflightTypeCounts;
@property (retain, nonatomic) NSMutableArray *shadowTypeCounts;

+ (Class)storedTypeCountsType;
+ (Class)inflightTypeCountsType;
+ (Class)shadowTypeCountsType;
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
- (void)addStoredTypeCounts:(id)a0;
- (void)addInflightTypeCounts:(id)a0;
- (void)addShadowTypeCounts:(id)a0;
- (unsigned long long)storedTypeCountsCount;
- (void)clearStoredTypeCounts;
- (id)storedTypeCountsAtIndex:(unsigned long long)a0;
- (unsigned long long)inflightTypeCountsCount;
- (void)clearInflightTypeCounts;
- (id)inflightTypeCountsAtIndex:(unsigned long long)a0;
- (unsigned long long)shadowTypeCountsCount;
- (void)clearShadowTypeCounts;
- (id)shadowTypeCountsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
