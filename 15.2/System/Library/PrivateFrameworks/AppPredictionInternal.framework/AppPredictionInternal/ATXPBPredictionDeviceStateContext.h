@class NSString;

@interface ATXPBPredictionDeviceStateContext : PBCodable <NSCopying> {
    struct { unsigned char inAirplaneMode : 1; unsigned char onWifi : 1; } _has;
}

@property (nonatomic) BOOL hasOnWifi;
@property (nonatomic) BOOL onWifi;
@property (readonly, nonatomic) BOOL hasWifiSSID;
@property (retain, nonatomic) NSString *wifiSSID;
@property (nonatomic) BOOL hasInAirplaneMode;
@property (nonatomic) BOOL inAirplaneMode;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
