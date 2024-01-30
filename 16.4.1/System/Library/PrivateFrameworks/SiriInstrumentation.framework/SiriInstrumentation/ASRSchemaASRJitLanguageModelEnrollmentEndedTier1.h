@class NSArray, NSData, SISchemaUUID;

@interface ASRSchemaASRJitLanguageModelEnrollmentEndedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *dialogContexts;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
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
- (void)addDialogContext:(id)a0;
- (void)clearDialogContext;
- (void)deleteDialogContext;
- (void)deleteLinkId;
- (id)dialogContextAtIndex:(unsigned long long)a0;
- (unsigned long long)dialogContextCount;

@end
