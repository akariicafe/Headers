@class NSArray, NSData;

@interface SADSchemaSADAvailableAssetDailyStatus : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *namespaceStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addNamespaceStatus:(id)a0;
- (void)clearNamespaceStatus;
- (unsigned long long)namespaceStatusCount;
- (id)namespaceStatusAtIndex:(unsigned long long)a0;

@end
