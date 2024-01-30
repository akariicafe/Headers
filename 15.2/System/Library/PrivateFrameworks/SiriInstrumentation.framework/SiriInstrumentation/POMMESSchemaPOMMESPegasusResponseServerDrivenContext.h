@class NSArray, NSData;

@interface POMMESSchemaPOMMESPegasusResponseServerDrivenContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *catIds;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addCatId:(id)a0;
- (void)clearCatId;
- (unsigned long long)catIdCount;
- (id)catIdAtIndex:(unsigned long long)a0;

@end
