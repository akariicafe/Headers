@interface AWDWiFiMetricActiveProbeStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char avgRTTLargePktSize : 1; unsigned char avgRTTMediumPktSize : 1; unsigned char avgRTTSmallPktSize : 1; unsigned char maxRTTLargePktSize : 1; unsigned char maxRTTMediumPktSize : 1; unsigned char maxRTTSmallPktSize : 1; unsigned char minRTTLargePktSize : 1; unsigned char minRTTMediumPktSize : 1; unsigned char minRTTSmallPktSize : 1; unsigned char perLargePktSize : 1; unsigned char perMediumPktSize : 1; unsigned char perSmallPktSize : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasMinRTTSmallPktSize;
@property (nonatomic) unsigned int minRTTSmallPktSize;
@property (nonatomic) BOOL hasMaxRTTSmallPktSize;
@property (nonatomic) unsigned int maxRTTSmallPktSize;
@property (nonatomic) BOOL hasAvgRTTSmallPktSize;
@property (nonatomic) unsigned int avgRTTSmallPktSize;
@property (nonatomic) BOOL hasPerSmallPktSize;
@property (nonatomic) unsigned int perSmallPktSize;
@property (nonatomic) BOOL hasMinRTTMediumPktSize;
@property (nonatomic) unsigned int minRTTMediumPktSize;
@property (nonatomic) BOOL hasMaxRTTMediumPktSize;
@property (nonatomic) unsigned int maxRTTMediumPktSize;
@property (nonatomic) BOOL hasAvgRTTMediumPktSize;
@property (nonatomic) unsigned int avgRTTMediumPktSize;
@property (nonatomic) BOOL hasPerMediumPktSize;
@property (nonatomic) unsigned int perMediumPktSize;
@property (nonatomic) BOOL hasMinRTTLargePktSize;
@property (nonatomic) unsigned int minRTTLargePktSize;
@property (nonatomic) BOOL hasMaxRTTLargePktSize;
@property (nonatomic) unsigned int maxRTTLargePktSize;
@property (nonatomic) BOOL hasAvgRTTLargePktSize;
@property (nonatomic) unsigned int avgRTTLargePktSize;
@property (nonatomic) BOOL hasPerLargePktSize;
@property (nonatomic) unsigned int perLargePktSize;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
