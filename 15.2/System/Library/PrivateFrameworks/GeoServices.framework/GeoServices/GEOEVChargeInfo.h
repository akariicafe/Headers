@class PBUnknownFields;

@interface GEOEVChargeInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _gainedBatteryPercentage;
    unsigned int _chargingTime;
    unsigned int _gainedBatteryCharge;
    unsigned int _gainedTravelRange;
    struct { unsigned char has_gainedBatteryPercentage : 1; unsigned char has_chargingTime : 1; unsigned char has_gainedBatteryCharge : 1; unsigned char has_gainedTravelRange : 1; } _flags;
}

@property (nonatomic) BOOL hasChargingTime;
@property (nonatomic) unsigned int chargingTime;
@property (nonatomic) BOOL hasGainedBatteryPercentage;
@property (nonatomic) double gainedBatteryPercentage;
@property (nonatomic) BOOL hasGainedTravelRange;
@property (nonatomic) unsigned int gainedTravelRange;
@property (nonatomic) BOOL hasGainedBatteryCharge;
@property (nonatomic) unsigned int gainedBatteryCharge;
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
