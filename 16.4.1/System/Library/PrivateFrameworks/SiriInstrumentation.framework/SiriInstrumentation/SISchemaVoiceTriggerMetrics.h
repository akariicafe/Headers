@class NSArray, MHSchemaMHVoiceTriggerFirstPassDailyMetadata, NSData;

@interface SISchemaVoiceTriggerMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char implicitUtterances : 1; unsigned char explicitUtterances : 1; unsigned char firstPassTriggers : 1; unsigned char isJSEnabled : 1; } _has;
}

@property (nonatomic) int implicitUtterances;
@property (nonatomic) BOOL hasImplicitUtterances;
@property (nonatomic) int explicitUtterances;
@property (nonatomic) BOOL hasExplicitUtterances;
@property (nonatomic) int firstPassTriggers;
@property (nonatomic) BOOL hasFirstPassTriggers;
@property (copy, nonatomic) NSArray *firstPassStatistics;
@property (retain, nonatomic) MHSchemaMHVoiceTriggerFirstPassDailyMetadata *firstPassMetadata;
@property (nonatomic) BOOL hasFirstPassMetadata;
@property (nonatomic) BOOL isJSEnabled;
@property (nonatomic) BOOL hasIsJSEnabled;
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
- (void)addFirstPassStatistics:(id)a0;
- (void)clearFirstPassStatistics;
- (void)deleteExplicitUtterances;
- (void)deleteFirstPassMetadata;
- (void)deleteFirstPassStatistics;
- (void)deleteFirstPassTriggers;
- (void)deleteImplicitUtterances;
- (void)deleteIsJSEnabled;
- (id)firstPassStatisticsAtIndex:(unsigned long long)a0;
- (unsigned long long)firstPassStatisticsCount;

@end
