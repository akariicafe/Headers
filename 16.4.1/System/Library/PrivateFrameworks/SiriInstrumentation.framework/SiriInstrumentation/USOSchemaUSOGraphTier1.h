@class NSArray, NSData, SISchemaUUID;

@interface USOSchemaUSOGraphTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *linkedUsoNodeDatas;
@property (copy, nonatomic) NSArray *linkedUsoEntityIdentifiers;
@property (copy, nonatomic) NSArray *linkedUsoGraphNodeDatas;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)linkedUsoEntityIdentifiersCount;
- (void)clearLinkedUsoEntityIdentifiers;
- (void)addLinkedUsoEntityIdentifiers:(id)a0;
- (void)addLinkedUsoGraphNodeData:(id)a0;
- (void)addLinkedUsoNodeData:(id)a0;
- (void)clearLinkedUsoGraphNodeData;
- (void)clearLinkedUsoNodeData;
- (void)deleteLinkId;
- (void)deleteLinkedUsoEntityIdentifiers;
- (void)deleteLinkedUsoGraphNodeData;
- (void)deleteLinkedUsoNodeData;
- (id)linkedUsoEntityIdentifiersAtIndex:(unsigned long long)a0;
- (id)linkedUsoGraphNodeDataAtIndex:(unsigned long long)a0;
- (unsigned long long)linkedUsoGraphNodeDataCount;
- (id)linkedUsoNodeDataAtIndex:(unsigned long long)a0;
- (unsigned long long)linkedUsoNodeDataCount;

@end
