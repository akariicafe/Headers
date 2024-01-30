@class NSArray, NSData;

@interface EXPSiriSchemaEXPAllocationChangelogSnapshot : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *allocations;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)allocationsCount;
- (id)allocationsAtIndex:(unsigned long long)a0;
- (void)addAllocations:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearAllocations;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
