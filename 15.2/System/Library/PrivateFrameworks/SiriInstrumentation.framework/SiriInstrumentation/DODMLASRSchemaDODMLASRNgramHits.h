@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASRNgramHits : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *hits;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)addHits:(unsigned int)a0;
- (id)dictionaryRepresentation;
- (void)clearHits;
- (unsigned long long)hitsCount;
- (unsigned int)hitsAtIndex:(unsigned long long)a0;

@end
