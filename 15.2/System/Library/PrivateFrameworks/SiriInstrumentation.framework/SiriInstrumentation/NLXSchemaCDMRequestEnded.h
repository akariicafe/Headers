@class NSArray, NSData;

@interface NLXSchemaCDMRequestEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *parses;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addParses:(id)a0;
- (void)clearParses;
- (unsigned long long)parsesCount;
- (id)parsesAtIndex:(unsigned long long)a0;

@end
