@class NSString, NSData, SISchemaUUID;

@interface DODMLSchemaDODMLClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char trialDeploymentId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *dodMlId;
@property (nonatomic) BOOL hasDodMlId;
@property (copy, nonatomic) NSString *experimentName;
@property (nonatomic) BOOL hasExperimentName;
@property (copy, nonatomic) NSString *trialExperimentId;
@property (nonatomic) BOOL hasTrialExperimentId;
@property (retain, nonatomic) SISchemaUUID *trialTreatmentId;
@property (nonatomic) BOOL hasTrialTreatmentId;
@property (nonatomic) long long trialDeploymentId;
@property (nonatomic) BOOL hasTrialDeploymentId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteDodMlId;
- (void)deleteExperimentName;
- (void)deleteTrialDeploymentId;
- (void)deleteTrialExperimentId;
- (void)deleteTrialTreatmentId;

@end
