@class _MRVoiceInputDeviceDescriptorProtobuf;

@interface _MRRegisterVoiceInputDeviceMessageProtobuf : PBCodable <NSCopying> {
    _MRVoiceInputDeviceDescriptorProtobuf *_descriptor;
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
