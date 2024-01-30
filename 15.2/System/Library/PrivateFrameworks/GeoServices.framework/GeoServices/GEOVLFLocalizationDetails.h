@class GEOVLFSuccessDetails, GEOVLFGravityVector, PBDataReader, GEOVLFTileDetails, GEOVLFLocalizationAlgorithmDetails, GEOVLFFailureDetails, GEOVLFLocation;

@interface GEOVLFLocalizationDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct GEOVLFPositionContextClassification { double _indoorProbability; double _outdoorProbability; int _type; struct { unsigned char indoorProbability : 1; unsigned char outdoorProbability : 1; unsigned char type : 1; } _has; } _positionContextClassification;
    GEOVLFLocalizationAlgorithmDetails *_algorithmDetails;
    double _exposureTargetOffset;
    GEOVLFFailureDetails *_failureDetails;
    GEOVLFGravityVector *_gravityVector;
    GEOVLFLocation *_location;
    GEOVLFSuccessDetails *_successDetails;
    GEOVLFTileDetails *_tileDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _relativeTimestampMs;
    unsigned int _runTimeMs;
    struct { unsigned char has_positionContextClassification : 1; unsigned char has_exposureTargetOffset : 1; unsigned char has_relativeTimestampMs : 1; unsigned char has_runTimeMs : 1; unsigned char read_algorithmDetails : 1; unsigned char read_failureDetails : 1; unsigned char read_gravityVector : 1; unsigned char read_location : 1; unsigned char read_successDetails : 1; unsigned char read_tileDetails : 1; unsigned char wrote_anyField : 1; } _flags;
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
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOVLFLocation *location;
@property (nonatomic) BOOL hasExposureTargetOffset;
@property (nonatomic) double exposureTargetOffset;
@property (nonatomic) BOOL hasPositionContextClassification;
@property (nonatomic) struct GEOVLFPositionContextClassification { double x0; double x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } positionContextClassification;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
