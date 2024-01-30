@class SPProtoAudioFilePlayerItem, SPProtoAudioFileQueuePlayer, SPProtoAudioFilePlayerAsset;

@interface SPProtoAudioFilePlayerMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAsset;
@property (retain, nonatomic) SPProtoAudioFilePlayerAsset *asset;
@property (readonly, nonatomic) BOOL hasPlayerItem;
@property (retain, nonatomic) SPProtoAudioFilePlayerItem *playerItem;
@property (readonly, nonatomic) BOOL hasQueuePlayer;
@property (retain, nonatomic) SPProtoAudioFileQueuePlayer *queuePlayer;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
