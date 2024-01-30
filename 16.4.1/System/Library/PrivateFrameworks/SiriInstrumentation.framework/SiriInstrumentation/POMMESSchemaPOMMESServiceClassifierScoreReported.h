@class NSData;

@interface POMMESSchemaPOMMESServiceClassifierScoreReported : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char classifierLabel : 1; } _has;
}

@property (nonatomic) double score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) int classifierLabel;
@property (nonatomic) BOOL hasClassifierLabel;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteClassifierLabel;
- (void)deleteScore;

@end
