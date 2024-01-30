@class _MRVoiceInputDeviceDescriptorProtobuf;

@interface _MRVoiceInputDevice : PBCodable <NSCopying> {
    _MRVoiceInputDeviceDescriptorProtobuf *_descriptor;
    unsigned int _deviceID;
    int _recordingState;
    struct { unsigned char deviceID : 1; unsigned char recordingState : 1; } _has;
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
