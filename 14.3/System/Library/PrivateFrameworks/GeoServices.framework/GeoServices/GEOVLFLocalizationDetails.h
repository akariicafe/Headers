@class GEOVLFSuccessDetails, GEOVLFGravityVector, GEOVLFTileDetails, GEOVLFLocalizationAlgorithmDetails, GEOVLFFailureDetails, PBDataReader;

@interface GEOVLFLocalizationDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOVLFLocalizationAlgorithmDetails *_algorithmDetails;
    GEOVLFFailureDetails *_failureDetails;
    GEOVLFGravityVector *_gravityVector;
    GEOVLFSuccessDetails *_successDetails;
    GEOVLFTileDetails *_tileDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _relativeTimestampMs;
    unsigned int _runTimeMs;
    struct { unsigned char has_relativeTimestampMs : 1; unsigned char has_runTimeMs : 1; unsigned char read_algorithmDetails : 1; unsigned char read_failureDetails : 1; unsigned char read_gravityVector : 1; unsigned char read_successDetails : 1; unsigned char read_tileDetails : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTileDetails;
@property (retain, nonatomic) GEOVLFTileDetails *tileDetails;
@property (nonatomic) BOOL hasRelativeTimestampMs;
@property (nonatomic) unsigned int relativeTimestampMs;
@property (nonatomic) BOOL hasRunTimeMs;
@property (nonatomic) unsigned int runTimeMs;
@property (readonly, nonatomic) BOOL hasAlgorithmDetails;
@property (retain, nonatomic) GEOVLFLocalizationAlgorithmDetails *algorithmDetails;
@property (readonly, nonatomic) BOOL hasSuccessDetails;
@property (retain, nonatomic) GEOVLFSuccessDetails *successDetails;
@property (readonly, nonatomic) BOOL hasFailureDetails;
@property (retain, nonatomic) GEOVLFFailureDetails *failureDetails;
@property (readonly, nonatomic) BOOL hasGravityVector;
@property (retain, nonatomic) GEOVLFGravityVector *gravityVector;

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

@end
