@class SIRICOMMONStringValue;

@interface SIRINLUEXTERNALRewrittenUtterance : PBCodable <NSCopying> {
    struct { unsigned char score : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRewrittenUtterance;
@property (retain, nonatomic) SIRICOMMONStringValue *rewrittenUtterance;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;

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
