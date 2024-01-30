@class NSString, NSData;

@interface VGVehicleStateStorage : PBCodable <NSCopying> {
    struct { unsigned char batteryPercentage : 1; unsigned char currentBatteryCapacity : 1; unsigned char currentEVRange : 1; unsigned char dateOfUpdate : 1; unsigned char maxBatteryCapacity : 1; unsigned char maxEVRange : 1; unsigned char minBatteryCapacity : 1; unsigned char activeConnector : 1; unsigned char origin : 1; unsigned char isCharging : 1; } _has;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasDateOfUpdate;
@property (nonatomic) double dateOfUpdate;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) int origin;
@property (nonatomic) BOOL hasBatteryPercentage;
@property (nonatomic) double batteryPercentage;
@property (nonatomic) BOOL hasCurrentEVRange;
@property (nonatomic) double currentEVRange;
@property (nonatomic) BOOL hasMaxEVRange;
@property (nonatomic) double maxEVRange;
@property (nonatomic) BOOL hasMinBatteryCapacity;
@property (nonatomic) double minBatteryCapacity;
@property (nonatomic) BOOL hasCurrentBatteryCapacity;
@property (nonatomic) double currentBatteryCapacity;
@property (nonatomic) BOOL hasMaxBatteryCapacity;
@property (nonatomic) double maxBatteryCapacity;
@property (readonly, nonatomic) BOOL hasConsumptionArguments;
@property (retain, nonatomic) NSString *consumptionArguments;
@property (readonly, nonatomic) BOOL hasChargingArguments;
@property (retain, nonatomic) NSString *chargingArguments;
@property (nonatomic) BOOL hasIsCharging;
@property (nonatomic) BOOL isCharging;
@property (nonatomic) BOOL hasActiveConnector;
@property (nonatomic) int activeConnector;
@property (readonly, nonatomic) BOOL hasPairedAppInstallSessionIdentifier;
@property (retain, nonatomic) NSData *pairedAppInstallSessionIdentifier;
@property (readonly, nonatomic) BOOL hasPairedAppInstallDeviceIdentifier;
@property (retain, nonatomic) NSString *pairedAppInstallDeviceIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)activeConnectorAsString:(int)a0;
- (int)StringAsActiveConnector:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)originAsString:(int)a0;
- (int)StringAsOrigin:(id)a0;

@end
