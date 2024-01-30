@class NSString;

@interface _MRUpdateActiveSystemEndpointRequestProtobuf : PBCodable <NSCopying> {
    int _changeType;
    NSString *_outputDeviceUID;
    NSString *_reason;
    BOOL _pairedDeviceSync;
    struct { unsigned char changeType : 1; unsigned char pairedDeviceSync : 1; } _has;
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
