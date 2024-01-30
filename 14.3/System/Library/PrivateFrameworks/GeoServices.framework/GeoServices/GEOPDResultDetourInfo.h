@class PBUnknownFields;

@interface GEOPDResultDetourInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _detourDistance;
    int _detourTime;
    unsigned int _distanceToPlace;
    unsigned int _timeToPlace;
    struct { unsigned char has_detourDistance : 1; unsigned char has_detourTime : 1; unsigned char has_distanceToPlace : 1; unsigned char has_timeToPlace : 1; } _flags;
}

@property (nonatomic) BOOL hasDetourTime;
@property (nonatomic) int detourTime;
@property (nonatomic) BOOL hasTimeToPlace;
@property (nonatomic) unsigned int timeToPlace;
@property (nonatomic) BOOL hasDetourDistance;
@property (nonatomic) int detourDistance;
@property (nonatomic) BOOL hasDistanceToPlace;
@property (nonatomic) unsigned int distanceToPlace;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
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
