@class FLOWSchemaFLOWSmsAttachmentMetadata, NSData, FLOWSchemaFLOWSmsTextContentMetadata;

@interface FLOWSchemaFLOWSmsTextContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWSchemaFLOWSmsTextContentMetadata *smsTextContentMetadata;
@property (nonatomic) BOOL hasSmsTextContentMetadata;
@property (retain, nonatomic) FLOWSchemaFLOWSmsAttachmentMetadata *smsAttachmentMetadata;
@property (nonatomic) BOOL hasSmsAttachmentMetadata;
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
- (void)deleteSmsAttachmentMetadata;
- (void)deleteSmsTextContentMetadata;

@end
