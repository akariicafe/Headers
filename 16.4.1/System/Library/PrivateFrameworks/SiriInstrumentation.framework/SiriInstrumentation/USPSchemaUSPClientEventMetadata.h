@class NSData, USPSchemaUSPMeasurementContext, SISchemaUUID;

@interface USPSchemaUSPClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *uspId;
@property (nonatomic) BOOL hasUspId;
@property (retain, nonatomic) USPSchemaUSPMeasurementContext *context;
@property (nonatomic) BOOL hasContext;
@property (retain, nonatomic) SISchemaUUID *sutFingerprint;
@property (nonatomic) BOOL hasSutFingerprint;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (void)deleteContext;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteSutFingerprint;
- (void)deleteUspId;

@end
