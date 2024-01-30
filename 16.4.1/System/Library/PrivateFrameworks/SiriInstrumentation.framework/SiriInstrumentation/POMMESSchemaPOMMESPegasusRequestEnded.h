@class POMMESSchemaPOMMESPegasusResponseServerDrivenContext, NSString, POMMESSchemaPOMMESPegasusRequestArguments, POMMESSchemaPOMMESPegasusRequestKfedLatency, NSData, POMMESSchemaPOMMESPegasusResponseClientDrivenContext;

@interface POMMESSchemaPOMMESPegasusRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char status : 1; unsigned char confidenceScore : 1; unsigned char payloadSizeInKB : 1; unsigned char isRewrittenUtteranceUsed : 1; } _has;
}

@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) double confidenceScore;
@property (nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) double payloadSizeInKB;
@property (nonatomic) BOOL hasPayloadSizeInKB;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusResponseServerDrivenContext *serverDriven;
@property (nonatomic) BOOL hasServerDriven;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusResponseClientDrivenContext *clientDriven;
@property (nonatomic) BOOL hasClientDriven;
@property (copy, nonatomic) NSString *pegasusDomain;
@property (nonatomic) BOOL hasPegasusDomain;
@property (nonatomic) BOOL isRewrittenUtteranceUsed;
@property (nonatomic) BOOL hasIsRewrittenUtteranceUsed;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestArguments *requestArguments;
@property (nonatomic) BOOL hasRequestArguments;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestKfedLatency *kfedLatency;
@property (nonatomic) BOOL hasKfedLatency;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteClientDriven;
- (void)deleteConfidenceScore;
- (void)deleteIsRewrittenUtteranceUsed;
- (void)deleteKfedLatency;
- (void)deletePayloadSizeInKB;
- (void)deletePegasusDomain;
- (void)deleteRequestArguments;
- (void)deleteServerDriven;
- (void)deleteStatus;

@end
