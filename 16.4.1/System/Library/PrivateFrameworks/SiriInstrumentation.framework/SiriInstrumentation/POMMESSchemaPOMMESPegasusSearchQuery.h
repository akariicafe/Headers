@class NSArray, POMMESSchemaPOMMESPegasusSearchQueryAmpUserState, NSData;

@interface POMMESSchemaPOMMESPegasusSearchQuery : SISchemaInstrumentationMessage {
    struct { unsigned char hasRewrittenUtterances : 1; unsigned char hasAudioQueueStateInfo : 1; } _has;
}

@property (nonatomic) BOOL hasRewrittenUtterances;
@property (nonatomic) BOOL hasHasRewrittenUtterances;
@property (copy, nonatomic) NSArray *userSpans;
@property (nonatomic) BOOL hasAudioQueueStateInfo;
@property (nonatomic) BOOL hasHasAudioQueueStateInfo;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusSearchQueryAmpUserState *ampUserState;
@property (nonatomic) BOOL hasAmpUserState;
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
- (void)addUserSpan:(id)a0;
- (void)clearUserSpan;
- (void)deleteAmpUserState;
- (void)deleteHasAudioQueueStateInfo;
- (void)deleteHasRewrittenUtterances;
- (void)deleteUserSpan;
- (id)userSpanAtIndex:(unsigned long long)a0;
- (unsigned long long)userSpanCount;

@end
