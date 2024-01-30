@interface _MRGameControllerDigitizerProtobuf : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    double _x;
    double _y;
    BOOL _touchDown;
    struct { unsigned char timestamp : 1; unsigned char x : 1; unsigned char y : 1; unsigned char touchDown : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
