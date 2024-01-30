@class NLXSchemaPLUMSpanData, NSData, NLXSchemaCDMSiriVocabularySpanData;

@interface NLXSchemaCDMInternalSpanData : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMSiriVocabularySpanData *siriVocabularySpanData;
@property (nonatomic) BOOL hasSiriVocabularySpanData;
@property (retain, nonatomic) NLXSchemaPLUMSpanData *plumSpanData;
@property (nonatomic) BOOL hasPlumSpanData;
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
