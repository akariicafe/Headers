@class _MRDeviceInfoMessageProtobuf, NSString;

@interface _MROriginProtobuf : PBCodable <NSCopying> {
    _MRDeviceInfoMessageProtobuf *_deviceInfoDeprecated;
    NSString *_displayName;
    int _identifier;
    int _type;
    BOOL _isLocallyHosted;
    struct { unsigned char identifier : 1; unsigned char type : 1; unsigned char isLocallyHosted : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
