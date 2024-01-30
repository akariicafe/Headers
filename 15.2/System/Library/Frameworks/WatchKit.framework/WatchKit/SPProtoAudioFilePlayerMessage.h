@class SPProtoAudioFilePlayerItem, SPProtoAudioFileQueuePlayer, SPProtoAudioFilePlayerAsset;

@interface SPProtoAudioFilePlayerMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAsset;
@property (retain, nonatomic) SPProtoAudioFilePlayerAsset *asset;
@property (readonly, nonatomic) BOOL hasPlayerItem;
@property (retain, nonatomic) SPProtoAudioFilePlayerItem *playerItem;
@property (readonly, nonatomic) BOOL hasQueuePlayer;
@property (retain, nonatomic) SPProtoAudioFileQueuePlayer *queuePlayer;

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
