@class GEOChargerPlugsInfo, NSString, PBDataReader, PBUnknownFields;

@interface GEOEVInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOChargerPlugsInfo *_chargerPlugsInfo;
    NSString *_chargingArguments;
    NSString *_consumptionArguments;
    NSString *_vehicleIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _currentBatteryCharge;
    unsigned int _currentBatteryPercentage;
    unsigned int _lastSocUpdateDate;
    unsigned int _maxBatteryCharge;
    unsigned int _maxRange;
    unsigned int _minBatteryCharge;
    BOOL _isCharging;
    struct { unsigned char has_currentBatteryCharge : 1; unsigned char has_currentBatteryPercentage : 1; unsigned char has_lastSocUpdateDate : 1; unsigned char has_maxBatteryCharge : 1; unsigned char has_maxRange : 1; unsigned char has_minBatteryCharge : 1; unsigned char has_isCharging : 1; unsigned char read_unknownFields : 1; unsigned char read_chargerPlugsInfo : 1; unsigned char read_chargingArguments : 1; unsigned char read_consumptionArguments : 1; unsigned char read_vehicleIdentifier : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasCurrentBatteryPercentage;
@property (nonatomic) unsigned int currentBatteryPercentage;
@property (nonatomic) BOOL hasMaxRange;
@property (nonatomic) unsigned int maxRange;
@property (readonly, nonatomic) BOOL hasConsumptionArguments;
@property (retain, nonatomic) NSString *consumptionArguments;
@property (readonly, nonatomic) BOOL hasChargingArguments;
@property (retain, nonatomic) NSString *chargingArguments;
@property (nonatomic) BOOL hasCurrentBatteryCharge;
@property (nonatomic) unsigned int currentBatteryCharge;
@property (nonatomic) BOOL hasMaxBatteryCharge;
@property (nonatomic) unsigned int maxBatteryCharge;
@property (nonatomic) BOOL hasIsCharging;
@property (nonatomic) BOOL isCharging;
@property (nonatomic) BOOL hasMinBatteryCharge;
@property (nonatomic) unsigned int minBatteryCharge;
@property (readonly, nonatomic) BOOL hasVehicleIdentifier;
@property (retain, nonatomic) NSString *vehicleIdentifier;
@property (readonly, nonatomic) BOOL hasChargerPlugsInfo;
@property (retain, nonatomic) GEOChargerPlugsInfo *chargerPlugsInfo;
@property (nonatomic) BOOL hasLastSocUpdateDate;
@property (nonatomic) unsigned int lastSocUpdateDate;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
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
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
