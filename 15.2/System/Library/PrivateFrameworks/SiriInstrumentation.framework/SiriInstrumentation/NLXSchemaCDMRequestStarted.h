@class NLXSchemaCDMTurnInput, NSData;

@interface NLXSchemaCDMRequestStarted : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMTurnInput *currentTurnInput;
@property (nonatomic) BOOL hasCurrentTurnInput;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
