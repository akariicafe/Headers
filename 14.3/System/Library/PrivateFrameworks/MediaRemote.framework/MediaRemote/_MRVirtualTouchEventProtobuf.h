@interface _MRVirtualTouchEventProtobuf : PBCodable <NSCopying> {
    double _x;
    double _y;
    int _finger;
    int _phase;
    struct { unsigned char x : 1; unsigned char y : 1; unsigned char finger : 1; unsigned char phase : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
