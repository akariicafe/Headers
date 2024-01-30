@class NSArray, NSData;

@interface GRRSchemaGRRHypothesisRanked : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *rankings;
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
- (void)addRankings:(id)a0;
- (void)clearRankings;
- (void)deleteRankings;
- (id)rankingsAtIndex:(unsigned long long)a0;
- (unsigned long long)rankingsCount;

@end
