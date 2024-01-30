@interface _MRVirtualTouchDeviceDescriptorProtobuf : PBCodable <NSCopying> {
    float _screenSizeHeight;
    float _screenSizeWidth;
    BOOL _absolute;
    BOOL _integratedDisplay;
    struct { unsigned char screenSizeHeight : 1; unsigned char screenSizeWidth : 1; unsigned char absolute : 1; unsigned char integratedDisplay : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
