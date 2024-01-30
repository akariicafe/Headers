@class SISchemaInstrumentationMessage, ACTVSchemaACTVButtonInteractionDetected, NSData, ACTVSchemaACTVTurnActivated, ACTVSchemaACTVClientEventMetadata;

@interface ACTVSchemaACTVClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ACTVSchemaACTVClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ACTVSchemaACTVButtonInteractionDetected *buttonInteractionDetected;
@property (nonatomic) BOOL hasButtonInteractionDetected;
@property (retain, nonatomic) ACTVSchemaACTVTurnActivated *turnActivated;
@property (nonatomic) BOOL hasTurnActivated;
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
- (void)deleteButtonInteractionDetected;
- (void)deleteEventMetadata;
- (void)deleteTurnActivated;
- (id)getComponentId;

@end
