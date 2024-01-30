@class NLXSchemaCDMSiriVocabularySpanDataTier1, NSData;

@interface NLXSchemaCDMInternalSpanDataTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMSiriVocabularySpanDataTier1 *siriVocabularySpanData;
@property (nonatomic) BOOL hasSiriVocabularySpanData;
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
- (void)deleteSiriVocabularySpanData;

@end
