@class NSMutableArray;

@interface _MRClientUpdatesConfigurationProtobuf : PBCodable <NSCopying> {
    NSMutableArray *_subscribedPlayerPaths;
    BOOL _artworkUpdates;
    BOOL _keyboardUpdates;
    BOOL _nowPlayingUpdates;
    BOOL _outputDeviceUpdates;
    BOOL _systemEndpointUpdates;
    BOOL _volumeUpdates;
    struct { unsigned char artworkUpdates : 1; unsigned char keyboardUpdates : 1; unsigned char nowPlayingUpdates : 1; unsigned char outputDeviceUpdates : 1; unsigned char systemEndpointUpdates : 1; unsigned char volumeUpdates : 1; } _has;
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
