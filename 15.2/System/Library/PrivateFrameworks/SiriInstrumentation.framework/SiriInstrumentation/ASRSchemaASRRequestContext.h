@class ASRSchemaASRStarted, ASRSchemaASRFailed, ASRSchemaASREnded, NSData, ASRSchemaASRCancelled;

@interface ASRSchemaASRRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ASRSchemaASRStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) ASRSchemaASREnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) ASRSchemaASRFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) ASRSchemaASRCancelled *cancelled;
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
