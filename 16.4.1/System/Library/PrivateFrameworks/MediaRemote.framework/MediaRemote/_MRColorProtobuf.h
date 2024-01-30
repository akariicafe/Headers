@interface _MRColorProtobuf : PBCodable <NSCopying> {
    struct { unsigned char alpha : 1; unsigned char blue : 1; unsigned char green : 1; unsigned char red : 1; } _has;
}

@property (nonatomic) BOOL hasRed;
@property (nonatomic) float red;
@property (nonatomic) BOOL hasGreen;
@property (nonatomic) float green;
@property (nonatomic) BOOL hasBlue;
@property (nonatomic) float blue;
@property (nonatomic) BOOL hasAlpha;
@property (nonatomic) float alpha;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
