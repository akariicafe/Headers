@interface _MRVirtualTouchEventProtobuf : PBCodable <NSCopying> {
    double _x;
    double _y;
    int _finger;
    int _phase;
    struct { unsigned char x : 1; unsigned char y : 1; unsigned char finger : 1; unsigned char phase : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
