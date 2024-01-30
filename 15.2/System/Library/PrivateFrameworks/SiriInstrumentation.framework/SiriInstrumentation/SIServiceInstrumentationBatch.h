@class NSString, NSArray, NSData, SIServiceBatchInfo;

@interface SIServiceInstrumentationBatch : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *app_id;
@property (nonatomic) BOOL hasApp_id;
@property (retain, nonatomic) SIServiceBatchInfo *batch_info;
@property (nonatomic) BOOL hasBatch_info;
@property (copy, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)eventCount;
- (BOOL)readFrom:(id)a0;
- (void)addEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)eventAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)clearEvent;

@end
