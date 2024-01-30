@class SISchemaInstrumentationMessage, PSESchemaPSECallSignalGenerated, PSESchemaPSEMessageSignalGenerated, NSData, PSESchemaPSEMediaSignalGenerated, PSESchemaPSEGenericSignalGenerated, PSESchemaPSEClientEventMetadata;

@interface PSESchemaPSEClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) PSESchemaPSEClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) PSESchemaPSEGenericSignalGenerated *genericSignalGenerated;
@property (nonatomic) BOOL hasGenericSignalGenerated;
@property (retain, nonatomic) PSESchemaPSECallSignalGenerated *callSignalGenerated;
@property (nonatomic) BOOL hasCallSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEMessageSignalGenerated *messageSignalGenerated;
@property (nonatomic) BOOL hasMessageSignalGenerated;
@property (retain, nonatomic) PSESchemaPSEMediaSignalGenerated *mediaSignalGenerated;
@property (nonatomic) BOOL hasMediaSignalGenerated;
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
- (int)clockIsolationLevel;
- (void)deleteCallSignalGenerated;
- (void)deleteEventMetadata;
- (void)deleteGenericSignalGenerated;
- (void)deleteMediaSignalGenerated;
- (void)deleteMessageSignalGenerated;
- (id)getComponentId;

@end
