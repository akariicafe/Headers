@class PBUnknownFields;

@interface GEOPDDeparturePredicate : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct GEOPDTimeRange { unsigned int _duration; unsigned int _startTime; struct { unsigned char duration : 1; unsigned char startTime : 1; } _has; } _timeRange;
    unsigned int _numAdditionalDepartures;
    struct { unsigned char has_timeRange : 1; unsigned char has_numAdditionalDepartures : 1; } _flags;
}

@property (nonatomic) BOOL hasTimeRange;
@property (nonatomic) struct GEOPDTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } timeRange;
@property (nonatomic) BOOL hasNumAdditionalDepartures;
@property (nonatomic) unsigned int numAdditionalDepartures;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithTraitsTransitModeFilter:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
