@class _MRVolumeControlAvailabilityProtobuf, NSString;

@interface _MRVolumeControlCapabilitiesDidChangeMessageProtobuf : PBCodable <NSCopying> {
    _MRVolumeControlAvailabilityProtobuf *_capabilities;
    NSString *_endpointUID;
    NSString *_outputDeviceUID;
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
