@interface _MRAudioFadeResponseMessageProtobuf : PBCodable <NSCopying> {
    long long _fadeDuration;
    struct { unsigned char fadeDuration : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
