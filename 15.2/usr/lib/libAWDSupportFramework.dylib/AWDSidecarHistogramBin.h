@interface AWDSidecarHistogramBin : PBCodable <NSCopying> {
    struct { unsigned char binEnd : 1; unsigned char binStart : 1; unsigned char value : 1; } _has;
}

@property (nonatomic) BOOL hasBinStart;
@property (nonatomic) double binStart;
@property (nonatomic) BOOL hasBinEnd;
@property (nonatomic) double binEnd;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) double value;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
