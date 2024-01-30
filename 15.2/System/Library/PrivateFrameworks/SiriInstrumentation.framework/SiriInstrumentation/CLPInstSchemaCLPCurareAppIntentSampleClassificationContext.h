@class CLPInstSchemaCLPCurareAppIntentSampleClassificationEnded, CLPInstSchemaCLPCurareAppIntentSampleClassificationFailed, NSData, SISchemaUUID, CLPInstSchemaCLPCurareAppIntentSampleClassificationStarted;

@interface CLPInstSchemaCLPCurareAppIntentSampleClassificationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) CLPInstSchemaCLPCurareAppIntentSampleClassificationStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) CLPInstSchemaCLPCurareAppIntentSampleClassificationEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) CLPInstSchemaCLPCurareAppIntentSampleClassificationFailed *failed;
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
