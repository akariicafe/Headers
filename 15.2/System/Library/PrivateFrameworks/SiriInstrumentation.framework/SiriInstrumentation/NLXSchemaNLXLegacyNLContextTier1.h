@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaNLXLegacyNLContextTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *renderedTexts;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addRenderedTexts:(id)a0;
- (void)clearRenderedTexts;
- (unsigned long long)renderedTextsCount;
- (id)renderedTextsAtIndex:(unsigned long long)a0;

@end
