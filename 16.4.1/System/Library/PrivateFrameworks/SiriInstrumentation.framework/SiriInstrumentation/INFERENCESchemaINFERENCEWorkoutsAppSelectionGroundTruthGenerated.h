@class NSArray, NSData, INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals;

@interface INFERENCESchemaINFERENCEWorkoutsAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals *inferenceWorkoutsAppSelectionTrainingIndependentSignals;
@property (nonatomic) BOOL hasInferenceWorkoutsAppSelectionTrainingIndependentSignals;
@property (copy, nonatomic) NSArray *inferenceWorkoutsAppSelectionTrainingDependentSignals;
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
- (void)addInferenceWorkoutsAppSelectionTrainingDependentSignals:(id)a0;
- (void)clearInferenceWorkoutsAppSelectionTrainingDependentSignals;
- (void)deleteInferenceWorkoutsAppSelectionTrainingDependentSignals;
- (void)deleteInferenceWorkoutsAppSelectionTrainingIndependentSignals;
- (id)inferenceWorkoutsAppSelectionTrainingDependentSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)inferenceWorkoutsAppSelectionTrainingDependentSignalsCount;

@end
