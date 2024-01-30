@class NSData, SISchemaUUID;

@interface ORCHSchemaORCHRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char requestType : 1; unsigned char siriUODEnabled : 1; unsigned char siriUODMode : 1; unsigned char siriAsrMode : 1; unsigned char siriNlMode : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *orchestratorSessionId;
@property (nonatomic) BOOL hasOrchestratorSessionId;
@property (nonatomic) int requestType;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) BOOL siriUODEnabled;
@property (nonatomic) BOOL hasSiriUODEnabled;
@property (nonatomic) int siriUODMode;
@property (nonatomic) BOOL hasSiriUODMode;
@property (nonatomic) int siriAsrMode;
@property (nonatomic) BOOL hasSiriAsrMode;
@property (nonatomic) int siriNlMode;
@property (nonatomic) BOOL hasSiriNlMode;
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
- (void)deleteOrchestratorSessionId;
- (void)deleteRequestType;
- (void)deleteSiriAsrMode;
- (void)deleteSiriNlMode;
- (void)deleteSiriUODEnabled;
- (void)deleteSiriUODMode;

@end
