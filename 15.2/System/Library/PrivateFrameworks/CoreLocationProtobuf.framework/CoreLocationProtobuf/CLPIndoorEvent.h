@class CLPIndoorWifiScan, CLPBundleId, CLPIndoorCMPedometer, CLPIndoorCMAttitude, CLPLocation, CLPIndoorPressure, CLPIndoorMotionActivity;

@interface CLPIndoorEvent : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasCmAttitude;
@property (retain, nonatomic) CLPIndoorCMAttitude *cmAttitude;
@property (readonly, nonatomic) BOOL hasCmPedometer;
@property (retain, nonatomic) CLPIndoorCMPedometer *cmPedometer;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) CLPLocation *location;
@property (readonly, nonatomic) BOOL hasMotionActivity;
@property (retain, nonatomic) CLPIndoorMotionActivity *motionActivity;
@property (readonly, nonatomic) BOOL hasPressure;
@property (retain, nonatomic) CLPIndoorPressure *pressure;
@property (readonly, nonatomic) BOOL hasWifiScan;
@property (retain, nonatomic) CLPIndoorWifiScan *wifiScan;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) CLPBundleId *bundleId;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
