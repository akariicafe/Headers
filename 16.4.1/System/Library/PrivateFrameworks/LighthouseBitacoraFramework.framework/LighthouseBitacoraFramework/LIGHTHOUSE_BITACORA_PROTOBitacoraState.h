@class NSString, LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers;

@interface LIGHTHOUSE_BITACORA_PROTOBitacoraState : PBCodable <NSCopying> {
    struct { unsigned char countCustomTargetting : 1; unsigned char countCustomTargettingMet : 1; unsigned char countGeneralTargetting : 1; unsigned char countGeneralTargettingMet : 1; unsigned char countPerformTaskFailed : 1; unsigned char countPerformTaskSucceeded : 1; unsigned char countStopFailed : 1; unsigned char countStopSucceeded : 1; unsigned char countTaskCompletedFailed : 1; unsigned char countTaskCompletedSucceeded : 1; unsigned char countTaskFetchedFailed : 1; unsigned char countTaskFetchedSucceeded : 1; unsigned char countTaskScheduledFailed : 1; unsigned char countTaskScheduledSucceeded : 1; unsigned char trialIdentifierType : 1; unsigned char isActivated : 1; unsigned char isAllocated : 1; } _has;
}

@property (retain, nonatomic) NSString *telemetryID;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers *trialIdentifiers;
@property (retain, nonatomic) NSString *contextID;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasIsAllocated;
@property (nonatomic) BOOL isAllocated;
@property (nonatomic) BOOL hasIsActivated;
@property (nonatomic) BOOL isActivated;
@property (nonatomic) BOOL hasCountGeneralTargetting;
@property (nonatomic) unsigned int countGeneralTargetting;
@property (nonatomic) BOOL hasCountGeneralTargettingMet;
@property (nonatomic) unsigned int countGeneralTargettingMet;
@property (nonatomic) BOOL hasCountCustomTargetting;
@property (nonatomic) unsigned int countCustomTargetting;
@property (nonatomic) BOOL hasCountCustomTargettingMet;
@property (nonatomic) unsigned int countCustomTargettingMet;
@property (nonatomic) BOOL hasCountTaskFetchedSucceeded;
@property (nonatomic) unsigned int countTaskFetchedSucceeded;
@property (nonatomic) BOOL hasCountTaskFetchedFailed;
@property (nonatomic) unsigned int countTaskFetchedFailed;
@property (nonatomic) BOOL hasCountTaskScheduledSucceeded;
@property (nonatomic) unsigned int countTaskScheduledSucceeded;
@property (nonatomic) BOOL hasCountTaskScheduledFailed;
@property (nonatomic) unsigned int countTaskScheduledFailed;
@property (nonatomic) BOOL hasCountTaskCompletedSucceeded;
@property (nonatomic) unsigned int countTaskCompletedSucceeded;
@property (nonatomic) BOOL hasCountTaskCompletedFailed;
@property (nonatomic) unsigned int countTaskCompletedFailed;
@property (nonatomic) BOOL hasCountPerformTaskSucceeded;
@property (nonatomic) unsigned int countPerformTaskSucceeded;
@property (nonatomic) BOOL hasCountPerformTaskFailed;
@property (nonatomic) unsigned int countPerformTaskFailed;
@property (nonatomic) BOOL hasCountStopSucceeded;
@property (nonatomic) unsigned int countStopSucceeded;
@property (nonatomic) BOOL hasCountStopFailed;
@property (nonatomic) unsigned int countStopFailed;
@property (nonatomic) BOOL hasTrialIdentifierType;
@property (nonatomic) int trialIdentifierType;
@property (readonly, nonatomic) BOOL hasTrialExperimentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (readonly, nonatomic) BOOL hasTrialDeploymentID;
@property (retain, nonatomic) NSString *trialDeploymentID;
@property (readonly, nonatomic) BOOL hasTrialTreatmentID;
@property (retain, nonatomic) NSString *trialTreatmentID;
@property (readonly, nonatomic) BOOL hasTrialTaskID;
@property (retain, nonatomic) NSString *trialTaskID;

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
- (int)StringAsTrialIdentifierType:(id)a0;
- (id)trialIdentifierTypeAsString:(int)a0;

@end
