@interface CKDPDate : PBCodable <NSCopying> {
    struct { unsigned char time : 1; } _has;
}

@property (nonatomic) BOOL hasTime;
@property (nonatomic) double time;

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
