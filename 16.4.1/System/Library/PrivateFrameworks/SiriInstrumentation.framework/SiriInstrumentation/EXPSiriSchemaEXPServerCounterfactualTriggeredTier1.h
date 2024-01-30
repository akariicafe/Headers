@class NSArray, NSData, EXPSiriSchemaEXPSiriPegasusResponseSummary, SISchemaUUID;

@interface EXPSiriSchemaEXPServerCounterfactualTriggeredTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char isCounterfactualDifferent : 1; unsigned char compareRankingAtK : 1; unsigned char kValue : 1; unsigned char diffOutcome : 1; } _has;
}

@property (copy, nonatomic) NSArray *allocations;
@property (retain, nonatomic) SISchemaUUID *codepathId;
@property (nonatomic) BOOL hasCodepathId;
@property (retain, nonatomic) SISchemaUUID *pegasusId;
@property (nonatomic) BOOL hasPegasusId;
@property (copy, nonatomic) NSArray *counterfactualAllocations;
@property (nonatomic) BOOL isCounterfactualDifferent;
@property (nonatomic) BOOL hasIsCounterfactualDifferent;
@property (nonatomic) float compareRankingAtK;
@property (nonatomic) BOOL hasCompareRankingAtK;
@property (nonatomic) long long kValue;
@property (nonatomic) BOOL hasKValue;
@property (nonatomic) int diffOutcome;
@property (nonatomic) BOOL hasDiffOutcome;
@property (retain, nonatomic) EXPSiriSchemaEXPSiriPegasusResponseSummary *treatmentSummary;
@property (nonatomic) BOOL hasTreatmentSummary;
@property (retain, nonatomic) EXPSiriSchemaEXPSiriPegasusResponseSummary *counterfactualSummary;
@property (nonatomic) BOOL hasCounterfactualSummary;
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
- (void)clearAllocation;
- (void)deleteIsCounterfactualDifferent;
- (void)deletePegasusId;
- (unsigned long long)allocationCount;
- (void)addAllocation:(id)a0;
- (void)addCounterfactualAllocation:(id)a0;
- (id)allocationAtIndex:(unsigned long long)a0;
- (void)clearCounterfactualAllocation;
- (id)counterfactualAllocationAtIndex:(unsigned long long)a0;
- (unsigned long long)counterfactualAllocationCount;
- (void)deleteAllocation;
- (void)deleteCodepathId;
- (void)deleteCompareRankingAtK;
- (void)deleteCounterfactualAllocation;
- (void)deleteCounterfactualSummary;
- (void)deleteDiffOutcome;
- (void)deleteKValue;
- (void)deleteTreatmentSummary;

@end
