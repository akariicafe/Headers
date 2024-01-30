@interface CKDPDate : PBCodable <NSCopying> {
    struct { unsigned char time : 1; } _has;
}

@property (nonatomic) BOOL hasTime;
@property (nonatomic) double time;

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
