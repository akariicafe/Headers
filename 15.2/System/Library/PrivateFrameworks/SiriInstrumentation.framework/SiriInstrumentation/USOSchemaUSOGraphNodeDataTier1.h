@class NSArray, USOSchemaUSONodeDataTier1, NSData;

@interface USOSchemaUSOGraphNodeDataTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) USOSchemaUSONodeDataTier1 *linkedUsoNodeData;
@property (nonatomic) BOOL hasLinkedUsoNodeData;
@property (copy, nonatomic) NSArray *linkedUsoEntityIdentifiers;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addLinkedUsoEntityIdentifiers:(id)a0;
- (void)clearLinkedUsoEntityIdentifiers;
- (unsigned long long)linkedUsoEntityIdentifiersCount;
- (id)linkedUsoEntityIdentifiersAtIndex:(unsigned long long)a0;

@end
