@class NSData, CLPInstSchemaCLPNLv4SampleEvaluationFailed, SISchemaUUID, CLPInstSchemaCLPNLv4SampleEvaluationEnded, CLPInstSchemaCLPNLv4SampleEvaluationStarted;

@interface CLPInstSchemaCLPNLv4SampleEvaluationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) CLPInstSchemaCLPNLv4SampleEvaluationStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) CLPInstSchemaCLPNLv4SampleEvaluationEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) CLPInstSchemaCLPNLv4SampleEvaluationFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
