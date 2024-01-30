@interface AWDWiFiMetricsManagerDeviceCount : PBCodable <NSCopying> {
    struct { unsigned char timeSinceBoot : 1; unsigned char timestamp : 1; unsigned char deviceCount : 1; unsigned char deviceIdentifierMap : 1; unsigned char deviceInitFailureReason : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDeviceCount;
@property (nonatomic) unsigned int deviceCount;
@property (nonatomic) BOOL hasTimeSinceBoot;
@property (nonatomic) double timeSinceBoot;
@property (nonatomic) BOOL hasDeviceIdentifierMap;
@property (nonatomic) unsigned int deviceIdentifierMap;
@property (nonatomic) BOOL hasDeviceInitFailureReason;
@property (nonatomic) unsigned int deviceInitFailureReason;

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
