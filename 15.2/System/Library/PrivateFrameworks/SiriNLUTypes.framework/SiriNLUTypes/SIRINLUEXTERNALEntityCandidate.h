@class SIRINLUEXTERNALUsoGraph, SIRICOMMONDoubleValue;

@interface SIRINLUEXTERNALEntityCandidate : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEntity;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *entity;
@property (readonly, nonatomic) BOOL hasScore;
@property (retain, nonatomic) SIRICOMMONDoubleValue *score;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
