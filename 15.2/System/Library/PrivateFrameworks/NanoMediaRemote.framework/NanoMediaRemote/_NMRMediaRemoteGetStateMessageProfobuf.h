@class NSData;

@interface _NMRMediaRemoteGetStateMessageProfobuf : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char originIdentifier : 1; unsigned char state : 1; } _has;
}

@property (nonatomic) BOOL hasState;
@property (nonatomic) int state;
@property (readonly, nonatomic) BOOL hasKnownDigest;
@property (retain, nonatomic) NSData *knownDigest;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasNowPlayingInfoDigest;
@property (retain, nonatomic) NSData *nowPlayingInfoDigest;
@property (readonly, nonatomic) BOOL hasApplicationInfoDigest;
@property (retain, nonatomic) NSData *applicationInfoDigest;
@property (readonly, nonatomic) BOOL hasSupportedCommandsDigest;
@property (retain, nonatomic) NSData *supportedCommandsDigest;
@property (readonly, nonatomic) BOOL hasPlaybackQueueDigest;
@property (retain, nonatomic) NSData *playbackQueueDigest;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) int originIdentifier;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
