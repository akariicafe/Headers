@class NSString, SISchemaVersion, SISchemaUUID, NSData;

@interface FLOWSchemaFLOWEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *taskId;
@property (nonatomic) BOOL hasTaskId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (retain, nonatomic) SISchemaVersion *version;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) SISchemaUUID *flowId;
@property (nonatomic) BOOL hasFlowId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
