@class SICSchemaProvisionalSICClientEventMetadata, SICSchemaProvisionalSICInvocationContext, NSData;

@interface SICSchemaProvisionalSICClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SICSchemaProvisionalSICClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SICSchemaProvisionalSICInvocationContext *siriInCallInvocationContext;
@property (nonatomic) BOOL hasSiriInCallInvocationContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (id)getTypeId;
- (int)getAnyEventType;
- (id)qualifiedMessageName;
- (id)dictionaryRepresentation;
- (id)getVersion;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (BOOL)isProvisional;
- (void).cxx_destruct;
- (void)deleteEventMetadata;
- (void)deleteSiriInCallInvocationContext;

@end
