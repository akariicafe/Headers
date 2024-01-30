@class NSString, NSData;

@interface SISchemaClientFlow : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *clientFlowPayload;
@property (nonatomic) BOOL hasClientFlowPayload;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteClientFlowPayload;

@end
