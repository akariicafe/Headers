@interface KCellularLteCdrxConfig : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char cdrxConfigStatus : 1; unsigned char cellStatus : 1; unsigned char drxInactivityMs : 1; unsigned char drxRetxTimerMs : 1; unsigned char drxShortCycleNum : 1; unsigned char longDrxCycleMs : 1; unsigned char onDurationMs : 1; unsigned char rrcState : 1; unsigned char shortDrxCycleMs : 1; unsigned char subsId : 1; unsigned char transmissionMode : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasCellStatus;
@property (nonatomic) unsigned int cellStatus;
@property (nonatomic) BOOL hasOnDurationMs;
@property (nonatomic) unsigned int onDurationMs;
@property (nonatomic) BOOL hasDrxInactivityMs;
@property (nonatomic) unsigned int drxInactivityMs;
@property (nonatomic) BOOL hasDrxRetxTimerMs;
@property (nonatomic) unsigned int drxRetxTimerMs;
@property (nonatomic) BOOL hasLongDrxCycleMs;
@property (nonatomic) unsigned int longDrxCycleMs;
@property (nonatomic) BOOL hasShortDrxCycleMs;
@property (nonatomic) unsigned int shortDrxCycleMs;
@property (nonatomic) BOOL hasDrxShortCycleNum;
@property (nonatomic) unsigned int drxShortCycleNum;
@property (nonatomic) BOOL hasRrcState;
@property (nonatomic) int rrcState;
@property (nonatomic) BOOL hasCdrxConfigStatus;
@property (nonatomic) unsigned int cdrxConfigStatus;
@property (nonatomic) BOOL hasTransmissionMode;
@property (nonatomic) unsigned int transmissionMode;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)rrcStateAsString:(int)a0;
- (int)StringAsRrcState:(id)a0;

@end
