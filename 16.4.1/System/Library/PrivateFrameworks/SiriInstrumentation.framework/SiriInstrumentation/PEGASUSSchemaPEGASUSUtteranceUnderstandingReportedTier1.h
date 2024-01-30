@class NSArray, NSData, SISchemaUUID;

@interface PEGASUSSchemaPEGASUSUtteranceUnderstandingReportedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *topU2Intents;
@property (copy, nonatomic) NSArray *topKGSAIntents;
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
- (void)addTopKGSAIntents:(id)a0;
- (void)addTopU2Intents:(id)a0;
- (void)clearTopKGSAIntents;
- (void)clearTopU2Intents;
- (void)deleteLinkId;
- (void)deleteTopKGSAIntents;
- (void)deleteTopU2Intents;
- (id)topKGSAIntentsAtIndex:(unsigned long long)a0;
- (unsigned long long)topKGSAIntentsCount;
- (id)topU2IntentsAtIndex:(unsigned long long)a0;
- (unsigned long long)topU2IntentsCount;

@end
