@class NSString, NSArray, NSData, SIServiceBatchInfo;

@interface SIServiceInstrumentationBatch : PBCodable

@property (copy, nonatomic) NSString *app_id;
@property (nonatomic) BOOL hasApp_id;
@property (retain, nonatomic) SIServiceBatchInfo *batch_info;
@property (nonatomic) BOOL hasBatch_info;
@property (copy, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSData *jsonData;

- (void)addEvent:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)eventAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)eventCount;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)clearEvent;

@end
