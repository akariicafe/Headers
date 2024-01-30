@interface AWDMETRICSCellularPowerLogLTECDRXConfig : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char cycleStartOffset : 1; unsigned char drxInactivity : 1; unsigned char drxRetxTimer : 1; unsigned char drxShortCycleNum : 1; unsigned char longDrxCycle : 1; unsigned char onDuration : 1; unsigned char shortDrxCycle : 1; unsigned char subsId : 1; unsigned char cdrxEnable : 1; unsigned char shortDrxCycleEnable : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasOnDuration;
@property (nonatomic) unsigned int onDuration;
@property (nonatomic) BOOL hasDrxInactivity;
@property (nonatomic) unsigned int drxInactivity;
@property (nonatomic) BOOL hasDrxRetxTimer;
@property (nonatomic) unsigned int drxRetxTimer;
@property (nonatomic) BOOL hasLongDrxCycle;
@property (nonatomic) unsigned int longDrxCycle;
@property (nonatomic) BOOL hasCycleStartOffset;
@property (nonatomic) unsigned int cycleStartOffset;
@property (nonatomic) BOOL hasShortDrxCycleEnable;
@property (nonatomic) BOOL shortDrxCycleEnable;
@property (nonatomic) BOOL hasShortDrxCycle;
@property (nonatomic) unsigned int shortDrxCycle;
@property (nonatomic) BOOL hasDrxShortCycleNum;
@property (nonatomic) unsigned int drxShortCycleNum;
@property (nonatomic) BOOL hasCdrxEnable;
@property (nonatomic) BOOL cdrxEnable;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

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
