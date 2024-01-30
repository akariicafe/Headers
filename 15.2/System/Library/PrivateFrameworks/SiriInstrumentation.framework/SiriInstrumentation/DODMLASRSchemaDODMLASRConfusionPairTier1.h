@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASRConfusionPairTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *recognizedTokens;
@property (copy, nonatomic) NSArray *correctedTokens;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addRecognizedTokens:(id)a0;
- (void)addCorrectedTokens:(id)a0;
- (void)clearRecognizedTokens;
- (unsigned long long)recognizedTokensCount;
- (id)recognizedTokensAtIndex:(unsigned long long)a0;
- (void)clearCorrectedTokens;
- (unsigned long long)correctedTokensCount;
- (id)correctedTokensAtIndex:(unsigned long long)a0;

@end
