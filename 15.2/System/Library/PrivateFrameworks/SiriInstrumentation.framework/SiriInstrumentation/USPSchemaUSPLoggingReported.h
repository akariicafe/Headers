@class NSArray, NSData;

@interface USPSchemaUSPLoggingReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *metrics;
@property (copy, nonatomic) NSArray *sessionInfoItems;
@property (readonly, nonatomic) NSData *jsonData;

- (void)clearMetrics;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)metricsCount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addMetrics:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addSessionInfoItems:(id)a0;
- (void)clearSessionInfoItems;
- (unsigned long long)sessionInfoItemsCount;
- (id)sessionInfoItemsAtIndex:(unsigned long long)a0;
- (id)metricsAtIndex:(unsigned long long)a0;

@end
