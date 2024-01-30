@interface SIRINLUINTERNALSNLCSNLCParserResponse : PBCodable <NSCopying> {
    struct { unsigned char classificationLabel : 1; unsigned char classificationProbability : 1; } _has;
}

@property (nonatomic) BOOL hasClassificationLabel;
@property (nonatomic) int classificationLabel;
@property (nonatomic) BOOL hasClassificationProbability;
@property (nonatomic) float classificationProbability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsClassificationLabel:(id)a0;
- (id)classificationLabelAsString:(int)a0;

@end
