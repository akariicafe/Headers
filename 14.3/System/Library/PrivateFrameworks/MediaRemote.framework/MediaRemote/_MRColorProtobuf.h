@interface _MRColorProtobuf : PBCodable <NSCopying> {
    float _alpha;
    float _blue;
    float _green;
    float _red;
    struct { unsigned char alpha : 1; unsigned char blue : 1; unsigned char green : 1; unsigned char red : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
