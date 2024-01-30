@class NSString;

@interface _MRDiscoverySessionConfigurationProtobuf : PBCodable <NSCopying> {
    int _features;
    NSString *_outputDeviceUID;
    NSString *_routingContextUID;
    unsigned int _targetSessionID;
    BOOL _alwaysAllowUpdates;
    BOOL _enableThrottling;
    BOOL _populatesExternalDevice;
    struct { unsigned char features : 1; unsigned char targetSessionID : 1; unsigned char alwaysAllowUpdates : 1; unsigned char enableThrottling : 1; unsigned char populatesExternalDevice : 1; } _has;
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
