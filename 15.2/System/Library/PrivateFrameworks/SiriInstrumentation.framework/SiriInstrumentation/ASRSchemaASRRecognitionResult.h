@class NSArray, NSData, SISchemaUUID;

@interface ASRSchemaASRRecognitionResult : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *phrases;
@property (copy, nonatomic) NSArray *utterances;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addPhrases:(id)a0;
- (void)addUtterances:(id)a0;
- (void)clearPhrases;
- (unsigned long long)phrasesCount;
- (id)phrasesAtIndex:(unsigned long long)a0;
- (void)clearUtterances;
- (unsigned long long)utterancesCount;
- (id)utterancesAtIndex:(unsigned long long)a0;

@end
