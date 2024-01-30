@class EXPSearchSchemaEXPSearchSessionExperiments, NSData;

@interface EXPSearchSchemaEXPSearchClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) EXPSearchSchemaEXPSearchSessionExperiments *sessionExperiments;
@property (nonatomic) BOOL hasSessionExperiments;
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
