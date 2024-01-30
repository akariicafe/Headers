@class GEOTrafficPredictedPaces, GEOTrafficProbeFlow, GEOTrafficPath, PBDataReader;

@interface GEOTrafficSpeed : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOTrafficPath *_path;
    GEOTrafficPredictedPaces *_predictedPaces;
    GEOTrafficProbeFlow *_probeFlow;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _color;
    unsigned int _confidence;
    float _freeFlowSpeedKph;
    float _loadFactor;
    unsigned int _observationCount;
    unsigned int _probeCountPerHour;
    float _speedKph;
    struct { unsigned char has_color : 1; unsigned char has_confidence : 1; unsigned char has_freeFlowSpeedKph : 1; unsigned char has_loadFactor : 1; unsigned char has_observationCount : 1; unsigned char has_probeCountPerHour : 1; unsigned char has_speedKph : 1; unsigned char read_path : 1; unsigned char read_predictedPaces : 1; unsigned char read_probeFlow : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPath;
@property (retain, nonatomic) GEOTrafficPath *path;
@property (nonatomic) BOOL hasSpeedKph;
@property (nonatomic) float speedKph;
@property (nonatomic) BOOL hasColor;
@property (nonatomic) int color;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) unsigned int confidence;
@property (nonatomic) BOOL hasFreeFlowSpeedKph;
@property (nonatomic) float freeFlowSpeedKph;
@property (nonatomic) BOOL hasObservationCount;
@property (nonatomic) unsigned int observationCount;
@property (readonly, nonatomic) BOOL hasPredictedPaces;
@property (retain, nonatomic) GEOTrafficPredictedPaces *predictedPaces;
@property (nonatomic) BOOL hasLoadFactor;
@property (nonatomic) float loadFactor;
@property (nonatomic) BOOL hasProbeCountPerHour;
@property (nonatomic) unsigned int probeCountPerHour;
@property (readonly, nonatomic) BOOL hasProbeFlow;
@property (retain, nonatomic) GEOTrafficProbeFlow *probeFlow;

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
- (id)colorAsString:(int)a0;
- (int)StringAsColor:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
