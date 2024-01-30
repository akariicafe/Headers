@class SISchemaABExperimentServerFeatureTriggered, SISchemaABSeverEventMetadata, NSData;

@interface SISchemaABServerEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaABSeverEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SISchemaABExperimentServerFeatureTriggered *serverFeatureTriggered;
@property (nonatomic) BOOL hasServerFeatureTriggered;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
