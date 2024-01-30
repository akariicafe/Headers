@class NSData, CLPInstSchemaCLPCDMReplaySampleStarted, CLPInstSchemaCLPCDMReplaySampleEnded, SISchemaUUID, CLPInstSchemaCLPCDMReplaySampleFailed;

@interface CLPInstSchemaCLPCDMReplaySampleContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) CLPInstSchemaCLPCDMReplaySampleStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) CLPInstSchemaCLPCDMReplaySampleEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) CLPInstSchemaCLPCDMReplaySampleFailed *failed;
@property (nonatomic) BOOL hasFailed;
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
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
