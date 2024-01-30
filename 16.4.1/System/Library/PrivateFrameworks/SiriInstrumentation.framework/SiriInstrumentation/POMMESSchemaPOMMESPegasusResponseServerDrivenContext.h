@class NSArray, NSData;

@interface POMMESSchemaPOMMESPegasusResponseServerDrivenContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *catIds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addCatId:(id)a0;
- (id)catIdAtIndex:(unsigned long long)a0;
- (unsigned long long)catIdCount;
- (void)clearCatId;
- (void)deleteCatId;

@end
