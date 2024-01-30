@class NSString, LIGHTHOUSE_BITACORA_PROTOEventStatus, LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers;

@interface LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerLighthousePluginEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTrialIdentifiers;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers *trialIdentifiers;
@property (readonly, nonatomic) BOOL hasContextID;
@property (retain, nonatomic) NSString *contextID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasPerformTaskStatus;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOEventStatus *performTaskStatus;
@property (readonly, nonatomic) BOOL hasPerformTrialTaskStatus;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOEventStatus *performTrialTaskStatus;
@property (readonly, nonatomic) BOOL hasStop;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOEventStatus *stop;

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
