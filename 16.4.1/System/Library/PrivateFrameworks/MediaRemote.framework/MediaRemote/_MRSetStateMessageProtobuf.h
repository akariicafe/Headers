@class _MRPlaybackQueueCapabilitiesProtobuf, NSString, _MRNowPlayingInfoProtobuf, _MRPlaybackQueueProtobuf, _MRSupportedCommandsProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueRequestProtobuf;

@interface _MRSetStateMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char playbackStateTimestamp : 1; unsigned char playbackState : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasNowPlayingInfo;
@property (retain, nonatomic) _MRNowPlayingInfoProtobuf *nowPlayingInfo;
@property (readonly, nonatomic) BOOL hasSupportedCommands;
@property (retain, nonatomic) _MRSupportedCommandsProtobuf *supportedCommands;
@property (readonly, nonatomic) BOOL hasPlaybackQueue;
@property (retain, nonatomic) _MRPlaybackQueueProtobuf *playbackQueue;
@property (readonly, nonatomic) BOOL hasDisplayID;
@property (retain, nonatomic) NSString *displayID;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL hasPlaybackState;
@property (nonatomic) int playbackState;
@property (readonly, nonatomic) BOOL hasPlaybackQueueCapabilities;
@property (retain, nonatomic) _MRPlaybackQueueCapabilitiesProtobuf *playbackQueueCapabilities;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) _MRPlaybackQueueRequestProtobuf *request;
@property (nonatomic) BOOL hasPlaybackStateTimestamp;
@property (nonatomic) double playbackStateTimestamp;

- (int)StringAsPlaybackState:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)playbackStateAsString:(int)a0;
- (void).cxx_destruct;

@end
