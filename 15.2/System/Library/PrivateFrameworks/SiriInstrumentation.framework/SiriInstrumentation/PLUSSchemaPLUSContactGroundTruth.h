@class NSData, SISchemaUUID;

@interface PLUSSchemaPLUSContactGroundTruth : SISchemaInstrumentationMessage {
    struct { unsigned char groundTruthSource : 1; unsigned char hasSiriResolvedContactForEntity : 1; unsigned char siriResolvedAndPlusInferredContactComparison : 1; unsigned char contactSuggestionUsedBySiri : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *groundTruthId;
@property (nonatomic) BOOL hasGroundTruthId;
@property (nonatomic) int groundTruthSource;
@property (nonatomic) BOOL hasGroundTruthSource;
@property (nonatomic) BOOL hasSiriResolvedContactForEntity;
@property (nonatomic) BOOL hasHasSiriResolvedContactForEntity;
@property (nonatomic) int siriResolvedAndPlusInferredContactComparison;
@property (nonatomic) BOOL hasSiriResolvedAndPlusInferredContactComparison;
@property (nonatomic) int contactSuggestionUsedBySiri;
@property (nonatomic) BOOL hasContactSuggestionUsedBySiri;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
