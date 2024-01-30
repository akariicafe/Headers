@class NSString, NSData, SISchemaUUID;

@interface PLUSSchemaPLUSMediaGroundTruth : SISchemaInstrumentationMessage {
    struct { unsigned char groundTruthSource : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *groundTruthId;
@property (nonatomic) BOOL hasGroundTruthId;
@property (nonatomic) int groundTruthSource;
@property (nonatomic) BOOL hasGroundTruthSource;
@property (copy, nonatomic) NSString *selectedMediaEntityAdamId;
@property (nonatomic) BOOL hasSelectedMediaEntityAdamId;
@property (copy, nonatomic) NSString *inferredMediaEntityAdamId;
@property (nonatomic) BOOL hasInferredMediaEntityAdamId;
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
- (void)deleteInferredMediaEntityAdamId;
- (void)deleteSelectedMediaEntityAdamId;
- (void)deleteGroundTruthId;
- (void)deleteGroundTruthSource;

@end
