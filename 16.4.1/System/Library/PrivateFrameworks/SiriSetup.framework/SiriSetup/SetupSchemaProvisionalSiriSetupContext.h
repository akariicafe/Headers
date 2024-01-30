@class SetupSchemaProvisionalSiriSetupEnded, NSData, SetupSchemaProvisionalSiriSetupStep, SetupSchemaProvisionalSiriSetupStarted;

@interface SetupSchemaProvisionalSiriSetupContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupStarted *started;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupStep *step;
@property (nonatomic) BOOL hasStep;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteEnded;
- (void)deleteStarted;
- (void)deleteStep;

@end
