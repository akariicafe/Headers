@class NSData;

@interface NLXSchemaMARRSRepetitionDetectionEvaluated : SISchemaInstrumentationMessage {
    struct { unsigned char repetitionType : 1; unsigned char ruleType : 1; unsigned char noRepetitionConfidence : 1; unsigned char fullRepetitionConfidence : 1; unsigned char partialRepetitionConfidence : 1; } _has;
}

@property (nonatomic) int repetitionType;
@property (nonatomic) BOOL hasRepetitionType;
@property (nonatomic) int ruleType;
@property (nonatomic) BOOL hasRuleType;
@property (nonatomic) float noRepetitionConfidence;
@property (nonatomic) BOOL hasNoRepetitionConfidence;
@property (nonatomic) float fullRepetitionConfidence;
@property (nonatomic) BOOL hasFullRepetitionConfidence;
@property (nonatomic) float partialRepetitionConfidence;
@property (nonatomic) BOOL hasPartialRepetitionConfidence;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
