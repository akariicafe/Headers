@interface SIRINLUINTERNALSNLCSNLCParserResponse : PBCodable <NSCopying> {
    struct { unsigned char classificationLabel : 1; unsigned char classificationProbability : 1; } _has;
}

@property (nonatomic) BOOL hasClassificationLabel;
@property (nonatomic) int classificationLabel;
@property (nonatomic) BOOL hasClassificationProbability;
@property (nonatomic) float classificationProbability;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)classificationLabelAsString:(int)a0;
- (int)StringAsClassificationLabel:(id)a0;

@end
