@class SIRINLUEXTERNALUsoEdgeLabel;

@interface SIRINLUEXTERNALUsoEdge : PBCodable <NSCopying> {
    struct { unsigned char fromIndex : 1; unsigned char toIndex : 1; } _has;
}

@property (nonatomic) BOOL hasFromIndex;
@property (nonatomic) unsigned int fromIndex;
@property (nonatomic) BOOL hasToIndex;
@property (nonatomic) unsigned int toIndex;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) SIRINLUEXTERNALUsoEdgeLabel *label;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
