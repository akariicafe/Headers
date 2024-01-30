@class SPProtoAudioFilePlayerUpdateContainedIdentifier, SPProtoAudioFilePlayerItemSetCurrentTime, SPProtoObjectMessage, SPProtoAudioFilePlayerStatus;

@interface SPProtoAudioFilePlayerItem : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUpsertWithAsset;
@property (retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *upsertWithAsset;
@property (readonly, nonatomic) BOOL hasDestroy;
@property (retain, nonatomic) SPProtoObjectMessage *destroy;
@property (readonly, nonatomic) BOOL hasSetStatus;
@property (retain, nonatomic) SPProtoAudioFilePlayerStatus *setStatus;
@property (readonly, nonatomic) BOOL hasGetCurrentTime;
@property (retain, nonatomic) SPProtoObjectMessage *getCurrentTime;
@property (readonly, nonatomic) BOOL hasNotifyTimeJumped;
@property (retain, nonatomic) SPProtoObjectMessage *notifyTimeJumped;
@property (readonly, nonatomic) BOOL hasNotifyDidPlayToEndTime;
@property (retain, nonatomic) SPProtoObjectMessage *notifyDidPlayToEndTime;
@property (readonly, nonatomic) BOOL hasNotifyFailedToPlayToEndTime;
@property (retain, nonatomic) SPProtoObjectMessage *notifyFailedToPlayToEndTime;
@property (readonly, nonatomic) BOOL hasSetItemCurrentTime;
@property (retain, nonatomic) SPProtoAudioFilePlayerItemSetCurrentTime *setItemCurrentTime;

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
- (id)sockPuppetMessage;

@end
