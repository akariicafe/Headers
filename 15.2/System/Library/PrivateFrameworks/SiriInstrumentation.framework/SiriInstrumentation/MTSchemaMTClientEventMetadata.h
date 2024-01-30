@class NSData, SISchemaUUID;

@interface MTSchemaMTClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *mtId;
@property (nonatomic) BOOL hasMtId;
@property (retain, nonatomic) SISchemaUUID *sessionId;
@property (nonatomic) BOOL hasSessionId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
