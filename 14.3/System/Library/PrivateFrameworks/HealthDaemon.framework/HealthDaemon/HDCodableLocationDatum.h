@interface HDCodableLocationDatum : PBCodable <NSCopying> {
    struct { unsigned char altitude : 1; unsigned char course : 1; unsigned char horizontalAccuracy : 1; unsigned char latitude : 1; unsigned char longitude : 1; unsigned char speed : 1; unsigned char timestamp : 1; unsigned char verticalAccuracy : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) double altitude;
@property (nonatomic) BOOL hasSpeed;
@property (nonatomic) double speed;
@property (nonatomic) BOOL hasCourse;
@property (nonatomic) double course;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) BOOL hasVerticalAccuracy;
@property (nonatomic) double verticalAccuracy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
