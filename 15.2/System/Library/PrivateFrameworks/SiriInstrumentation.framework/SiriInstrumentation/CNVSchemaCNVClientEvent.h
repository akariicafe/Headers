@class CNVSchemaCNVIntentEagerExecutionContext, CNVSchemaCNVIntentFinalExecutionContext, NSData, CNVSchemaCNVUsoGraphTier1, CNVSchemaCNVIntentReformationContext, CNVSchemaCNVClientEventMetadata;

@interface CNVSchemaCNVClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) CNVSchemaCNVClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) CNVSchemaCNVIntentReformationContext *intentReformationContext;
@property (nonatomic) BOOL hasIntentReformationContext;
@property (retain, nonatomic) CNVSchemaCNVUsoGraphTier1 *cnvUsoGraphTier1;
@property (nonatomic) BOOL hasCnvUsoGraphTier1;
@property (retain, nonatomic) CNVSchemaCNVIntentEagerExecutionContext *intentEagerExecutionContext;
@property (nonatomic) BOOL hasIntentEagerExecutionContext;
@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionContext *intentFinalExecutionContext;
@property (nonatomic) BOOL hasIntentFinalExecutionContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
