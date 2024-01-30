@class NSArray, NSData;

@interface ASRSchemaASRInterpretation : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)tokensAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addTokens:(id)a0;
- (void)clearTokens;
- (unsigned long long)tokensCount;

@end
