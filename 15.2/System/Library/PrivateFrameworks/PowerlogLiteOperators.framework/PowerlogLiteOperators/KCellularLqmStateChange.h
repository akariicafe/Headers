@interface KCellularLqmStateChange : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char hiPowerEvent : 1; unsigned char hiPowerExitReason : 1; unsigned char lqmState : 1; unsigned char lteRsrp : 1; unsigned char lteRsrq : 1; unsigned char lteRssi : 1; unsigned char lteRssnr : 1; unsigned char prevLqmState : 1; unsigned char prevStateDurationSec : 1; unsigned char prevSysMode : 1; unsigned char sysMode : 1; unsigned char wcdmaEcio : 1; unsigned char wcdmaRscp : 1; unsigned char isScreenOn : 1; unsigned char prevIsScreenOn : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasPrevStateDurationSec;
@property (nonatomic) unsigned int prevStateDurationSec;
@property (nonatomic) BOOL hasLqmState;
@property (nonatomic) unsigned int lqmState;
@property (nonatomic) BOOL hasSysMode;
@property (nonatomic) int sysMode;
@property (nonatomic) BOOL hasIsScreenOn;
@property (nonatomic) BOOL isScreenOn;
@property (nonatomic) BOOL hasPrevLqmState;
@property (nonatomic) unsigned int prevLqmState;
@property (nonatomic) BOOL hasPrevSysMode;
@property (nonatomic) unsigned int prevSysMode;
@property (nonatomic) BOOL hasPrevIsScreenOn;
@property (nonatomic) BOOL prevIsScreenOn;
@property (nonatomic) BOOL hasHiPowerEvent;
@property (nonatomic) int hiPowerEvent;
@property (nonatomic) BOOL hasHiPowerExitReason;
@property (nonatomic) int hiPowerExitReason;
@property (nonatomic) BOOL hasWcdmaEcio;
@property (nonatomic) int wcdmaEcio;
@property (nonatomic) BOOL hasWcdmaRscp;
@property (nonatomic) int wcdmaRscp;
@property (nonatomic) BOOL hasLteRssi;
@property (nonatomic) int lteRssi;
@property (nonatomic) BOOL hasLteRsrp;
@property (nonatomic) int lteRsrp;
@property (nonatomic) BOOL hasLteRsrq;
@property (nonatomic) int lteRsrq;
@property (nonatomic) BOOL hasLteRssnr;
@property (nonatomic) int lteRssnr;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)hiPowerEventAsString:(int)a0;
- (int)StringAsHiPowerEvent:(id)a0;
- (id)hiPowerExitReasonAsString:(int)a0;
- (int)StringAsHiPowerExitReason:(id)a0;

@end
