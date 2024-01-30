@class _MRDeviceInfoMessageProtobuf, NSString;

@interface _MROriginProtobuf : PBCodable <NSCopying> {
    _MRDeviceInfoMessageProtobuf *_deviceInfoDeprecated;
    NSString *_displayName;
    int _identifier;
    int _type;
    struct { unsigned char identifier : 1; unsigned char type : 1; } _has;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
