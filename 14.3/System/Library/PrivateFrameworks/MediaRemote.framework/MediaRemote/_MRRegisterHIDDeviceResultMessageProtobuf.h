@interface _MRRegisterHIDDeviceResultMessageProtobuf : PBCodable <NSCopying> {
    unsigned int _deviceIdentifier;
    unsigned int _errorCode;
    struct { unsigned char deviceIdentifier : 1; unsigned char errorCode : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
