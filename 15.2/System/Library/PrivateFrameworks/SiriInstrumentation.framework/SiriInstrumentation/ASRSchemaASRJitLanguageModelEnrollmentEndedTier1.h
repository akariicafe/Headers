@class NSArray, NSData, SISchemaUUID;

@interface ASRSchemaASRJitLanguageModelEnrollmentEndedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *dialogContexts;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addDialogContext:(id)a0;
- (void)clearDialogContext;
- (unsigned long long)dialogContextCount;
- (id)dialogContextAtIndex:(unsigned long long)a0;

@end
