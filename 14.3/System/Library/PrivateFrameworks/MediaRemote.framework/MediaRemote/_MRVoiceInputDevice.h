@class _MRVoiceInputDeviceDescriptorProtobuf;

@interface _MRVoiceInputDevice : PBCodable <NSCopying> {
    _MRVoiceInputDeviceDescriptorProtobuf *_descriptor;
    unsigned int _deviceID;
    int _recordingState;
    struct { unsigned char deviceID : 1; unsigned char recordingState : 1; } _has;
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
