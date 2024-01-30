@interface HDCodableMessageVersion : PBCodable <NSCopying> {
    struct { unsigned char compatibilityVersion : 1; unsigned char entityVersion : 1; } _has;
}

@property (nonatomic) BOOL hasEntityVersion;
@property (nonatomic) int entityVersion;
@property (nonatomic) BOOL hasCompatibilityVersion;
@property (nonatomic) int compatibilityVersion;

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
