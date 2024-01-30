@class NSData, NSString;

@interface SIServiceInstrumentationBatchResponse : PBCodable

@property (copy, nonatomic) NSData *batch_id;
@property (nonatomic) BOOL hasBatch_id;
@property (nonatomic) int status_code;
@property (nonatomic) BOOL hasStatus_code;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL hasMessage;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
