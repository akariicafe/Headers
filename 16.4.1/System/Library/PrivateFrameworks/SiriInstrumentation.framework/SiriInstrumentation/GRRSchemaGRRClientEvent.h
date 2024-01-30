@class SISchemaInstrumentationMessage, GRRSchemaGRRClientEventMetadata, GRRSchemaGRRFeatureExtractionContext, NSData, GRRSchemaGRRSystemErrorOccurred, GRRSchemaGRRHypothesisRankingContext;

@interface GRRSchemaGRRClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) GRRSchemaGRRClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) GRRSchemaGRRFeatureExtractionContext *featureExtractionContext;
@property (nonatomic) BOOL hasFeatureExtractionContext;
@property (retain, nonatomic) GRRSchemaGRRHypothesisRankingContext *hypothesisRankingContext;
@property (nonatomic) BOOL hasHypothesisRankingContext;
@property (retain, nonatomic) GRRSchemaGRRSystemErrorOccurred *systemErrorOccurred;
@property (nonatomic) BOOL hasSystemErrorOccurred;
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
- (void)deleteEventMetadata;
- (void)deleteFeatureExtractionContext;
- (void)deleteHypothesisRankingContext;
- (void)deleteSystemErrorOccurred;
- (id)getComponentId;

@end
