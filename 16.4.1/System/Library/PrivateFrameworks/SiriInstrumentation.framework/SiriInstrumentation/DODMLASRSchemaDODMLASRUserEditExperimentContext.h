@class DODMLASRSchemaDODMLASRUserEditExperimentStarted, DODMLASRSchemaDODMLASRUserEditExperimentEnded, NSData;

@interface DODMLASRSchemaDODMLASRUserEditExperimentContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) DODMLASRSchemaDODMLASRUserEditExperimentStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRUserEditExperimentEnded *ended;
@property (nonatomic) BOOL hasEnded;
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
- (void)deleteEnded;
- (void)deleteStartedOrChanged;

@end
