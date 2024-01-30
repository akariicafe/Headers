@interface _MRRegisterVoiceInputDeviceResponseMessageProtobuf : PBCodable <NSCopying> {
    unsigned int _deviceID;
    unsigned int _errorCode;
    struct { unsigned char deviceID : 1; unsigned char errorCode : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
