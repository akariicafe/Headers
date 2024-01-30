@class NSData, SISchemaUUID;

@interface SICSchemaProvisionalSICClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *sicId;
@property (nonatomic) BOOL hasSicId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteSicId;

@end
