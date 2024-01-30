@class PBUnknownFields;

@interface GEOCyclingUserPreferences : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _avoidBusyRoads;
    BOOL _avoidHills;
    BOOL _avoidStairs;
    struct { unsigned char has_avoidBusyRoads : 1; unsigned char has_avoidHills : 1; unsigned char has_avoidStairs : 1; } _flags;
}

@property (nonatomic) BOOL hasAvoidStairs;
@property (nonatomic) BOOL avoidStairs;
@property (nonatomic) BOOL hasAvoidHills;
@property (nonatomic) BOOL avoidHills;
@property (nonatomic) BOOL hasAvoidBusyRoads;
@property (nonatomic) BOOL avoidBusyRoads;
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
