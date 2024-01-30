@class NSString;

@interface _MRUpdateActiveSystemEndpointRequestProtobuf : PBCodable <NSCopying> {
    int _changeType;
    NSString *_outputDeviceUID;
    NSString *_reason;
    BOOL _pairedDeviceSync;
    struct { unsigned char changeType : 1; unsigned char pairedDeviceSync : 1; } _has;
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
