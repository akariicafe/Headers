@interface _MRAudioTimeProtobuf : PBCodable <NSCopying> {
    double _sampleRate;
    double _timestamp;
    struct { unsigned char sampleRate : 1; unsigned char timestamp : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
