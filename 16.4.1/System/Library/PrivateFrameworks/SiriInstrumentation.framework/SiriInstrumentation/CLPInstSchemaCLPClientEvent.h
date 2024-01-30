@class NSData, SISchemaInstrumentationMessage, CLPInstSchemaCLPCurareAppIntentSampleClassificationContext, CLPInstSchemaCLPClientEventMetadata, CLPInstSchemaCLPCDMReplaySampleContext, CLPInstSchemaCLPCDMReplayTaskContext, CLPInstSchemaCLPNLv4TaskEvaluationContext, CLPInstSchemaCLPNLv4SampleEvaluationContext, CLPInstSchemaCLPCurareAppIntentTaskClassificationContext;

@interface CLPInstSchemaCLPClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) CLPInstSchemaCLPClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) CLPInstSchemaCLPNLv4SampleEvaluationContext *nlv4SampleEvaluationContext;
@property (nonatomic) BOOL hasNlv4SampleEvaluationContext;
@property (retain, nonatomic) CLPInstSchemaCLPNLv4TaskEvaluationContext *nlv4TaskEvaluationContext;
@property (nonatomic) BOOL hasNlv4TaskEvaluationContext;
@property (retain, nonatomic) CLPInstSchemaCLPCurareAppIntentSampleClassificationContext *curareAppIntentSampleClassificationContext;
@property (nonatomic) BOOL hasCurareAppIntentSampleClassificationContext;
@property (retain, nonatomic) CLPInstSchemaCLPCurareAppIntentTaskClassificationContext *curareAppIntentTaskClassificationContext;
@property (nonatomic) BOOL hasCurareAppIntentTaskClassificationContext;
@property (retain, nonatomic) CLPInstSchemaCLPCDMReplaySampleContext *cdmReplaySampleContext;
@property (nonatomic) BOOL hasCdmReplaySampleContext;
@property (retain, nonatomic) CLPInstSchemaCLPCDMReplayTaskContext *cdmReplayTaskContext;
@property (nonatomic) BOOL hasCdmReplayTaskContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (int)componentName;
- (int)getAnyEventType;
- (id)suppressMessageUnderConditions;
- (id)qualifiedMessageName;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteNlv4TaskEvaluationContext;
- (void)deleteCdmReplaySampleContext;
- (void)deleteCdmReplayTaskContext;
- (void)deleteCurareAppIntentSampleClassificationContext;
- (void)deleteCurareAppIntentTaskClassificationContext;
- (void)deleteEventMetadata;
- (void)deleteNlv4SampleEvaluationContext;
- (id)getComponentId;

@end
