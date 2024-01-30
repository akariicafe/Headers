@interface AWDPowerApMetrics : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char apAwakeDuration : 1; unsigned char cpuPowerMicroWatt : 1; unsigned char dramPowerMicroWatt : 1; unsigned char gpuPowerMicroWatt : 1; unsigned char socPowerMicroWatt : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasCpuPowerMicroWatt;
@property (nonatomic) unsigned int cpuPowerMicroWatt;
@property (nonatomic) BOOL hasSocPowerMicroWatt;
@property (nonatomic) unsigned int socPowerMicroWatt;
@property (nonatomic) BOOL hasGpuPowerMicroWatt;
@property (nonatomic) unsigned int gpuPowerMicroWatt;
@property (nonatomic) BOOL hasDramPowerMicroWatt;
@property (nonatomic) unsigned int dramPowerMicroWatt;
@property (nonatomic) BOOL hasApAwakeDuration;
@property (nonatomic) unsigned int apAwakeDuration;

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
