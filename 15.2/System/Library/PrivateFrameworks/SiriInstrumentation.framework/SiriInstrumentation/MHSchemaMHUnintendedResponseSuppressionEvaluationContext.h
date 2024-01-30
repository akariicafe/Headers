@class MHSchemaMHUnintendedResponseSuppressionStarted, MHSchemaMHUnintendedResponseSuppressionEnded, NSData, MHSchemaMHUnintendedResponseSuppressionFailed;

@interface MHSchemaMHUnintendedResponseSuppressionEvaluationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) MHSchemaMHUnintendedResponseSuppressionStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) MHSchemaMHUnintendedResponseSuppressionEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) MHSchemaMHUnintendedResponseSuppressionFailed *failed;
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
