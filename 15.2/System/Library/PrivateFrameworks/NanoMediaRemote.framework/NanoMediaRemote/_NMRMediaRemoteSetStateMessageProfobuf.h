@class NSData;

@interface _NMRMediaRemoteSetStateMessageProfobuf : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char originIdentifier : 1; unsigned char state : 1; } _has;
}

@property (nonatomic) BOOL hasState;
@property (nonatomic) int state;
@property (readonly, nonatomic) BOOL hasPayload;
@property (retain, nonatomic) NSData *payload;
@property (readonly, nonatomic) BOOL hasDigest;
@property (retain, nonatomic) NSData *digest;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasNowPlayingInfo;
@property (retain, nonatomic) NSData *nowPlayingInfo;
@property (readonly, nonatomic) BOOL hasApplicationInfo;
@property (retain, nonatomic) NSData *applicationInfo;
@property (readonly, nonatomic) BOOL hasSupportedCommands;
@property (retain, nonatomic) NSData *supportedCommands;
@property (readonly, nonatomic) BOOL hasPlaybackQueue;
@property (retain, nonatomic) NSData *playbackQueue;
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
