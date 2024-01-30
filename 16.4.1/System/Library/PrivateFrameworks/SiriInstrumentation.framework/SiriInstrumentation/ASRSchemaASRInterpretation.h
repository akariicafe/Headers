@class NSArray, NSData;

@interface ASRSchemaASRInterpretation : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *tokens;
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
- (id)tokensAtIndex:(unsigned long long)a0;
- (void)addTokens:(id)a0;
- (void)clearTokens;
- (void)deleteTokens;
- (unsigned long long)tokensCount;

@end
