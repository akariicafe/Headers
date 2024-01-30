@interface GEOLogMsgStateDeviceBase : PBCodable <NSCopying> {
    int _deviceBatteryState;
    int _deviceInterfaceOrientation;
    BOOL _deviceInVehicle;
    struct { unsigned char has_deviceBatteryState : 1; unsigned char has_deviceInterfaceOrientation : 1; unsigned char has_deviceInVehicle : 1; } _flags;
}

@property (nonatomic) BOOL hasDeviceInterfaceOrientation;
@property (nonatomic) int deviceInterfaceOrientation;
@property (nonatomic) BOOL hasDeviceBatteryState;
@property (nonatomic) int deviceBatteryState;
@property (nonatomic) BOOL hasDeviceInVehicle;
@property (nonatomic) BOOL deviceInVehicle;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (id)deviceInterfaceOrientationAsString:(int)a0;
- (int)StringAsDeviceInterfaceOrientation:(id)a0;
- (id)deviceBatteryStateAsString:(int)a0;
- (int)StringAsDeviceBatteryState:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
