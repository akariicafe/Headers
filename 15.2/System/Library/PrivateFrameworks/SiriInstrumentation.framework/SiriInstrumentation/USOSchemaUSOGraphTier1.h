@class NSArray, NSData, SISchemaUUID;

@interface USOSchemaUSOGraphTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *linkedUsoNodeDatas;
@property (copy, nonatomic) NSArray *linkedUsoEntityIdentifiers;
@property (copy, nonatomic) NSArray *linkedUsoGraphNodeDatas;
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
- (void)addLinkedUsoNodeData:(id)a0;
- (void)addLinkedUsoGraphNodeData:(id)a0;
- (void)clearLinkedUsoNodeData;
- (unsigned long long)linkedUsoNodeDataCount;
- (id)linkedUsoNodeDataAtIndex:(unsigned long long)a0;
- (void)clearLinkedUsoGraphNodeData;
- (unsigned long long)linkedUsoGraphNodeDataCount;
- (id)linkedUsoGraphNodeDataAtIndex:(unsigned long long)a0;

@end
