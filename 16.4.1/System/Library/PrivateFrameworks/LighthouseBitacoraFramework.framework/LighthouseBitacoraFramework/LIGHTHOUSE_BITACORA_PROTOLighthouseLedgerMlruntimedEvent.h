@class LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers, NSString, LIGHTHOUSE_BITACORA_PROTOTaskEvent, LIGHTHOUSE_BITACORA_PROTOScheduleStatus;

@interface LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerMlruntimedEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTrialIdentifiers;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers *trialIdentifiers;
@property (readonly, nonatomic) BOOL hasContextID;
@property (retain, nonatomic) NSString *contextID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasActivityScheduleStatus;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOScheduleStatus *activityScheduleStatus;
@property (readonly, nonatomic) BOOL hasTaskFetched;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOTaskEvent *taskFetched;
@property (readonly, nonatomic) BOOL hasTaskScheduled;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOTaskEvent *taskScheduled;
@property (readonly, nonatomic) BOOL hasTaskCompleted;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOTaskEvent *taskCompleted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
