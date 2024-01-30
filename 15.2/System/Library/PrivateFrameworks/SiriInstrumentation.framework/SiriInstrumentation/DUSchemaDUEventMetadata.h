@class NSData, SISchemaUUID;

@interface DUSchemaDUEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *assetIdentifier;
@property (nonatomic) BOOL hasAssetIdentifier;
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
