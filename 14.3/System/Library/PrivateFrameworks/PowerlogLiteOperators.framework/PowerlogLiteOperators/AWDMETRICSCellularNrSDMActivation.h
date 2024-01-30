@interface AWDMETRICSCellularNrSDMActivation : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationInPrevState : 1; unsigned char fr : 1; unsigned char subsId : 1; unsigned char triggerCause : 1; unsigned char apNrRecomm : 1; unsigned char apNrRecommConfFactor : 1; unsigned char fr1MeasDisabled : 1; unsigned char fr2MeasDisabled : 1; unsigned char isEndcCallActive : 1; unsigned char isRrcConnected : 1; unsigned char prevFr1MeasDisabled : 1; unsigned char prevFr2MeasDisabled : 1; unsigned char sib24Configured : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasFr1MeasDisabled;
@property (nonatomic) BOOL fr1MeasDisabled;
@property (nonatomic) BOOL hasFr2MeasDisabled;
@property (nonatomic) BOOL fr2MeasDisabled;
@property (nonatomic) BOOL hasPrevFr1MeasDisabled;
@property (nonatomic) BOOL prevFr1MeasDisabled;
@property (nonatomic) BOOL hasPrevFr2MeasDisabled;
@property (nonatomic) BOOL prevFr2MeasDisabled;
@property (nonatomic) BOOL hasTriggerCause;
@property (nonatomic) int triggerCause;
@property (nonatomic) BOOL hasApNrRecomm;
@property (nonatomic) BOOL apNrRecomm;
@property (nonatomic) BOOL hasApNrRecommConfFactor;
@property (nonatomic) BOOL apNrRecommConfFactor;
@property (nonatomic) BOOL hasSib24Configured;
@property (nonatomic) BOOL sib24Configured;
@property (nonatomic) BOOL hasDurationInPrevState;
@property (nonatomic) unsigned int durationInPrevState;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) BOOL hasIsRrcConnected;
@property (nonatomic) BOOL isRrcConnected;
@property (nonatomic) BOOL hasIsEndcCallActive;
@property (nonatomic) BOOL isEndcCallActive;
@property (nonatomic) BOOL hasFr;
@property (nonatomic) int fr;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)triggerCauseAsString:(int)a0;
- (int)StringAsTriggerCause:(id)a0;
- (id)frAsString:(int)a0;
- (int)StringAsFr:(id)a0;

@end
