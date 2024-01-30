@interface ACHCodableColor : PBCodable <NSCopying> {
    struct { unsigned char blue : 1; unsigned char green : 1; unsigned char red : 1; } _has;
}

@property (nonatomic) BOOL hasRed;
@property (nonatomic) double red;
@property (nonatomic) BOOL hasGreen;
@property (nonatomic) double green;
@property (nonatomic) BOOL hasBlue;
@property (nonatomic) double blue;

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
