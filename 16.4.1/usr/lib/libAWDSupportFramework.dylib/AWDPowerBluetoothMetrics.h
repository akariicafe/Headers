@interface AWDPowerBluetoothMetrics : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char btConnectedDuration : 1; unsigned char btOthersDuration : 1; unsigned char btRxDuration : 1; unsigned char btSleepDuration : 1; unsigned char btTotalPowerMicroWatt : 1; unsigned char btTxDuration : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasBtConnectedDuration;
@property (nonatomic) unsigned int btConnectedDuration;
@property (nonatomic) BOOL hasBtTxDuration;
@property (nonatomic) unsigned int btTxDuration;
@property (nonatomic) BOOL hasBtRxDuration;
@property (nonatomic) unsigned int btRxDuration;
@property (nonatomic) BOOL hasBtSleepDuration;
@property (nonatomic) unsigned int btSleepDuration;
@property (nonatomic) BOOL hasBtOthersDuration;
@property (nonatomic) unsigned int btOthersDuration;
@property (nonatomic) BOOL hasBtTotalPowerMicroWatt;
@property (nonatomic) unsigned int btTotalPowerMicroWatt;

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
