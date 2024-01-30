@class NSArray, NSData;

@interface ASRSchemaASRUtterance : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *interpretationIndices;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addInterpretationIndices:(unsigned int)a0;
- (void)clearInterpretationIndices;
- (unsigned long long)interpretationIndicesCount;
- (unsigned int)interpretationIndicesAtIndex:(unsigned long long)a0;

@end
