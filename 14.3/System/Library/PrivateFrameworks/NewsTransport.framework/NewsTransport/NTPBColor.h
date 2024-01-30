@interface NTPBColor : PBCodable <NSCopying> {
    struct { unsigned char a : 1; unsigned char b : 1; unsigned char g : 1; unsigned char r : 1; } _has;
}

@property (nonatomic) BOOL hasR;
@property (nonatomic) double r;
@property (nonatomic) BOOL hasG;
@property (nonatomic) double g;
@property (nonatomic) BOOL hasB;
@property (nonatomic) double b;
@property (nonatomic) BOOL hasA;
@property (nonatomic) double a;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
