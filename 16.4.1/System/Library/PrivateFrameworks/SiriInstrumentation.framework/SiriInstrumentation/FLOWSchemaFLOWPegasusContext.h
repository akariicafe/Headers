@class SISchemaUUID, NSData, NSArray, FLOWSchemaFLOWWebAnswerExecution, PEGASUSSchemaPEGASUSIntent, FLOWSchemaFLOWKGQAExecution, FLOWSchemaFLOWMapsExecution, FLOWSchemaFLOWSPORTSExecution, FLOWSchemaFLOWCrossIntentRankerResponse;

@interface FLOWSchemaFLOWPegasusContext : SISchemaInstrumentationMessage {
    struct { unsigned char productArea : 1; unsigned char primaryProvider : 1; unsigned char isHandOffExecution : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) int productArea;
@property (nonatomic) BOOL hasProductArea;
@property (nonatomic) int primaryProvider;
@property (nonatomic) BOOL hasPrimaryProvider;
@property (copy, nonatomic) NSArray *otherProviders;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSIntent *intent;
@property (nonatomic) BOOL hasIntent;
@property (nonatomic) BOOL isHandOffExecution;
@property (nonatomic) BOOL hasIsHandOffExecution;
@property (retain, nonatomic) FLOWSchemaFLOWKGQAExecution *kgQAExecution;
@property (nonatomic) BOOL hasKgQAExecution;
@property (retain, nonatomic) FLOWSchemaFLOWWebAnswerExecution *webAnswerExecution;
@property (nonatomic) BOOL hasWebAnswerExecution;
@property (retain, nonatomic) FLOWSchemaFLOWSPORTSExecution *sportsExecution;
@property (nonatomic) BOOL hasSportsExecution;
@property (retain, nonatomic) FLOWSchemaFLOWCrossIntentRankerResponse *crossIntentRankerResponse;
@property (nonatomic) BOOL hasCrossIntentRankerResponse;
@property (retain, nonatomic) FLOWSchemaFLOWMapsExecution *mapsExecution;
@property (nonatomic) BOOL hasMapsExecution;
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
- (void)deleteCrossIntentRankerResponse;
- (void)addOtherProviders:(int)a0;
- (void)clearOtherProviders;
- (void)deleteIntent;
- (void)deleteIsHandOffExecution;
- (void)deleteKgQAExecution;
- (void)deleteLinkId;
- (void)deleteMapsExecution;
- (void)deleteOtherProviders;
- (void)deletePrimaryProvider;
- (void)deleteProductArea;
- (void)deleteSportsExecution;
- (void)deleteWebAnswerExecution;
- (int)otherProvidersAtIndex:(unsigned long long)a0;
- (unsigned long long)otherProvidersCount;

@end
