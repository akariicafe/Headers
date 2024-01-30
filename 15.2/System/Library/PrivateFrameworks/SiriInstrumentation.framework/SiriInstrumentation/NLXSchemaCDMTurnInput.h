@class NSArray, NSData, NLXSchemaCDMTurnContext;

@interface NLXSchemaCDMTurnInput : SISchemaInstrumentationMessage {
    struct { unsigned char isTapToEdit : 1; } _has;
}

@property (copy, nonatomic) NSArray *asrHypothesisIds;
@property (retain, nonatomic) NLXSchemaCDMTurnContext *turnContext;
@property (nonatomic) BOOL hasTurnContext;
@property (nonatomic) BOOL isTapToEdit;
@property (nonatomic) BOOL hasIsTapToEdit;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addAsrHypothesisIds:(id)a0;
- (void)clearAsrHypothesisIds;
- (unsigned long long)asrHypothesisIdsCount;
- (id)asrHypothesisIdsAtIndex:(unsigned long long)a0;

@end
