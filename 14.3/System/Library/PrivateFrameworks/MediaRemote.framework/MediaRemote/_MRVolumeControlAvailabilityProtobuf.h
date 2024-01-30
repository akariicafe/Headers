@interface _MRVolumeControlAvailabilityProtobuf : PBCodable <NSCopying> {
    int _volumeCapabilities;
    BOOL _volumeControlAvailable;
    struct { unsigned char volumeCapabilities : 1; unsigned char volumeControlAvailable : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
