@class CAARSchemaCAARRequestContext, SISchemaInstrumentationMessage, CAARSchemaCAARClientEventMetadata, CAARSchemaCAARFeaturesGenerated, CAARSchemaCAARModelExecuted, NSData;

@interface CAARSchemaCAARClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) CAARSchemaCAARClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) CAARSchemaCAARRequestContext *caarRequestContext;
@property (nonatomic) BOOL hasCaarRequestContext;
@property (retain, nonatomic) CAARSchemaCAARFeaturesGenerated *featuresGenerated;
@property (nonatomic) BOOL hasFeaturesGenerated;
@property (retain, nonatomic) CAARSchemaCAARModelExecuted *modelExecuted;
@property (nonatomic) BOOL hasModelExecuted;
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
- (void)deleteCaarRequestContext;
- (void)deleteEventMetadata;
- (void)deleteFeaturesGenerated;
- (void)deleteModelExecuted;
- (id)getComponentId;

@end
