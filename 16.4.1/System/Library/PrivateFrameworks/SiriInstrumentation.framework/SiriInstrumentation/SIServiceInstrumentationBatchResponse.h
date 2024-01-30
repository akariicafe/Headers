@class NSData, NSString;

@interface SIServiceInstrumentationBatchResponse : SISchemaInstrumentationMessage {
    struct { unsigned char status_code : 1; } _has;
}

@property (copy, nonatomic) NSData *batch_id;
@property (nonatomic) BOOL hasBatch_id;
@property (nonatomic) int status_code;
@property (nonatomic) BOOL hasStatus_code;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL hasMessage;
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
- (void)deleteBatch_id;
- (void)deleteMessage;
- (void)deleteStatus_code;

@end
