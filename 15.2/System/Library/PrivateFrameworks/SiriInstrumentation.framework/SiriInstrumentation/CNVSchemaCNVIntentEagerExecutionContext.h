@class CNVSchemaCNVIntentEagerExecutionFailed, CNVSchemaCNVIntentEagerExecutionCancelled, NSData, CNVSchemaCNVIntentEagerExecutionEnded, CNVSchemaCNVIntentEagerExecutionStarted;

@interface CNVSchemaCNVIntentEagerExecutionContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) CNVSchemaCNVIntentEagerExecutionStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) CNVSchemaCNVIntentEagerExecutionEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) CNVSchemaCNVIntentEagerExecutionFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) CNVSchemaCNVIntentEagerExecutionCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
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
