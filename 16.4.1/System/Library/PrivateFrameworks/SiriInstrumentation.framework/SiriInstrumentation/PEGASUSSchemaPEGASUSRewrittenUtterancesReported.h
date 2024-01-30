@class NSArray, NSData, SISchemaUUID;

@interface PEGASUSSchemaPEGASUSRewrittenUtterancesReported : SISchemaInstrumentationMessage {
    struct { unsigned char wasRewrittenUtteranceUsed : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) BOOL wasRewrittenUtteranceUsed;
@property (nonatomic) BOOL hasWasRewrittenUtteranceUsed;
@property (copy, nonatomic) NSArray *rewrittenUtterancesMetadatas;
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
- (void)addRewrittenUtterancesMetadata:(id)a0;
- (void)deleteWasRewrittenUtteranceUsed;
- (void)clearRewrittenUtterancesMetadata;
- (void)deleteLinkId;
- (void)deleteRewrittenUtterancesMetadata;
- (id)rewrittenUtterancesMetadataAtIndex:(unsigned long long)a0;
- (unsigned long long)rewrittenUtterancesMetadataCount;

@end
