@class PBUnknownFields;

@interface GEOEVStepInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _remainingBatteryPercentage;
    unsigned int _remainingTravelRange;
    struct { unsigned char has_remainingBatteryPercentage : 1; unsigned char has_remainingTravelRange : 1; } _flags;
}

@property (nonatomic) BOOL hasRemainingBatteryPercentage;
@property (nonatomic) double remainingBatteryPercentage;
@property (nonatomic) BOOL hasRemainingTravelRange;
@property (nonatomic) unsigned int remainingTravelRange;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
