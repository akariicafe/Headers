@class GEOPDMapsIdentifier, GEOPDScorecardLayout, NSMutableArray, PBDataReader;

@interface GEOPDPlaceQuestionnaireResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_historicalMapsIds;
    GEOPDMapsIdentifier *_mapsId;
    GEOPDScorecardLayout *_scorecardLayout;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _status;
    BOOL _isOverride;
    struct { unsigned char has_status : 1; unsigned char has_isOverride : 1; unsigned char read_historicalMapsIds : 1; unsigned char read_mapsId : 1; unsigned char read_scorecardLayout : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasScorecardLayout;
@property (retain, nonatomic) GEOPDScorecardLayout *scorecardLayout;
@property (readonly, nonatomic) BOOL hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (nonatomic) BOOL hasIsOverride;
@property (nonatomic) BOOL isOverride;
@property (retain, nonatomic) NSMutableArray *historicalMapsIds;

+ (BOOL)isValid:(id)a0;
+ (Class)historicalMapsIdType;

- (id)initWithJSON:(id)a0;
- (void)addHistoricalMapsId:(id)a0;
- (unsigned long long)historicalMapsIdsCount;
- (void)clearHistoricalMapsIds;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsStatus:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)statusAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)historicalMapsIdAtIndex:(unsigned long long)a0;

@end
