@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSMentionResolverEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *mentionResolverSpans;
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
- (void)addMentionResolverSpans:(id)a0;
- (void)clearMentionResolverSpans;
- (void)deleteLinkId;
- (void)deleteMentionResolverSpans;
- (id)mentionResolverSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)mentionResolverSpansCount;

@end
