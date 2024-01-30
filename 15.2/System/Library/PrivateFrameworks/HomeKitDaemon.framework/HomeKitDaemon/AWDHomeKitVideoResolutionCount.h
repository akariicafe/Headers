@interface AWDHomeKitVideoResolutionCount : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char resolution : 1; } _has;
}

@property (nonatomic) BOOL hasResolution;
@property (nonatomic) int resolution;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)resolutionAsString:(int)a0;
- (int)StringAsResolution:(id)a0;

@end
