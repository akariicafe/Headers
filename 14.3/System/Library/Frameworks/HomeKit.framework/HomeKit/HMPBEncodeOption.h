@interface HMPBEncodeOption : PBCodable <NSCopying> {
    struct { unsigned char isSPI : 1; unsigned char isXPC : 1; } _has;
}

@property (nonatomic) BOOL hasIsXPC;
@property (nonatomic) BOOL isXPC;
@property (nonatomic) BOOL hasIsSPI;
@property (nonatomic) BOOL isSPI;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
