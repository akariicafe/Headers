@class NSString;

@interface SPProtoObjectMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)sockPuppetMessageForAssetDestroy;
- (id)sockPuppetMessageForPlayerItemDestroy;
- (id)sockPuppetMessageForPlayerItemGetCurrentTime;
- (id)sockPuppetMessageForPlayerItemNotifyTimeJumped;
- (id)sockPuppetMessageForPlayerItemNotifyDidPlayToEndTime;
- (id)sockPuppetMessageForPlayerItemNotifyFailedToPlayToEndTime;
- (id)sockPuppetMessageForQueuePlayerDestroy;
- (id)sockPuppetMessageForQueuePlayerAdvanceToNextItem;
- (id)sockPuppetMessageForQueuePlayerRemoveAllItems;

@end
