@class NSString, NSData, SISchemaUUID;

@interface EXPSchemaEXPTrialExperiment : SISchemaInstrumentationMessage {
    struct { unsigned char deploymentId : 1; unsigned char allocationStatus : 1; unsigned char lastUpdatedAtInMs : 1; unsigned char compatibilityVersion : 1; } _has;
}

@property (copy, nonatomic) NSString *experimentNamespace;
@property (nonatomic) BOOL hasExperimentNamespace;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) SISchemaUUID *treatmentId;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) long long deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) int allocationStatus;
@property (nonatomic) BOOL hasAllocationStatus;
@property (nonatomic) unsigned long long lastUpdatedAtInMs;
@property (nonatomic) BOOL hasLastUpdatedAtInMs;
@property (nonatomic) unsigned int compatibilityVersion;
@property (nonatomic) BOOL hasCompatibilityVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
