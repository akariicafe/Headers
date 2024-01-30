@interface HDCodableRoutePointDatum : PBCodable <NSCopying> {
    struct { unsigned char altitude : 1; unsigned char latitude : 1; unsigned char longitude : 1; unsigned char odometer : 1; unsigned char timestamp : 1; unsigned char signalEnvironmentType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) double altitude;
@property (nonatomic) BOOL hasOdometer;
@property (nonatomic) double odometer;
@property (nonatomic) BOOL hasSignalEnvironmentType;
@property (nonatomic) int signalEnvironmentType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
