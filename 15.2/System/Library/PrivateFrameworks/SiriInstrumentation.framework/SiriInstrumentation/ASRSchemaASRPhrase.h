@class NSArray, NSData;

@interface ASRSchemaASRPhrase : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *interpretations;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addInterpretations:(id)a0;
- (void)clearInterpretations;
- (unsigned long long)interpretationsCount;
- (id)interpretationsAtIndex:(unsigned long long)a0;

@end
