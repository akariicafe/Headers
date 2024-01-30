@class NSData, NSMutableArray, PBDataReader;

@interface GEOTFRoadSpeed : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { long long *list; unsigned long long count; unsigned long long size; } _geoIds;
    struct { float *list; unsigned long long count; unsigned long long size; } _latitudeCoordinates;
    struct { float *list; unsigned long long count; unsigned long long size; } _longitudeCoordinates;
    long long _geoid;
    NSData *_openlr;
    NSMutableArray *_predictedSpeeds;
    NSData *_zilch;
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
    struct { unsigned char has_color : 1; unsigned char has_confidence : 1; unsigned char has_decayTimeWindowInMinutes : 1; unsigned char has_endOffset : 1; unsigned char has_speedKph : 1; unsigned char has_startOffset : 1; unsigned char has_hidden : 1; unsigned char read_geoIds : 1; unsigned char read_latitudeCoordinates : 1; unsigned char read_longitudeCoordinates : 1; unsigned char read_openlr : 1; unsigned char read_predictedSpeeds : 1; unsigned char read_zilch : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
