@class NSData, NSMutableArray, PBDataReader;

@interface GEOTFCompactRoadSpeeds : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { long long *list; unsigned long long count; unsigned long long size; } _geoIds;
    NSData *_openlr;
    NSMutableArray *_predictedSpeeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _color;
    float _confidence;
    unsigned int _decayTimeWindowInMinutes;
    float _endOffset;
    unsigned int _speedKph;
    float _startOffset;
    BOOL _hidden;
    struct { unsigned char has_color : 1; unsigned char has_confidence : 1; unsigned char has_decayTimeWindowInMinutes : 1; unsigned char has_endOffset : 1; unsigned char has_speedKph : 1; unsigned char has_startOffset : 1; unsigned char has_hidden : 1; unsigned char read_geoIds : 1; unsigned char read_openlr : 1; unsigned char read_predictedSpeeds : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long geoIdsCount;
@property (readonly, nonatomic) long long *geoIds;
@property (nonatomic) BOOL hasStartOffset;
@property (nonatomic) float startOffset;
@property (nonatomic) BOOL hasEndOffset;
@property (nonatomic) float endOffset;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) BOOL hidden;
@property (retain, nonatomic) NSMutableArray *predictedSpeeds;
@property (nonatomic) BOOL hasColor;
@property (nonatomic) int color;
@property (nonatomic) BOOL hasSpeedKph;
@property (nonatomic) unsigned int speedKph;
@property (nonatomic) BOOL hasDecayTimeWindowInMinutes;
@property (nonatomic) unsigned int decayTimeWindowInMinutes;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) float confidence;
@property (readonly, nonatomic) BOOL hasOpenlr;
@property (retain, nonatomic) NSData *openlr;

+ (Class)predictedSpeedType;
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
- (void)addGeoIds:(long long)a0;
- (void)addPredictedSpeed:(id)a0;
- (void)clearGeoIds;
- (long long)geoIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)predictedSpeedsCount;
- (void)clearPredictedSpeeds;
- (id)predictedSpeedAtIndex:(unsigned long long)a0;
- (void)setGeoIds:(long long *)a0 count:(unsigned long long)a1;
- (id)colorAsString:(int)a0;
- (int)StringAsColor:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
