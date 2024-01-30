@class NSString;

@interface SPProtoObjectMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;

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
- (id)sockPuppetMessageForAssetDestroy;
- (id)sockPuppetMessageForPlayerItemDestroy;
- (id)sockPuppetMessageForPlayerItemGetCurrentTime;
- (id)sockPuppetMessageForPlayerItemNotifyDidPlayToEndTime;
- (id)sockPuppetMessageForPlayerItemNotifyFailedToPlayToEndTime;
- (id)sockPuppetMessageForPlayerItemNotifyTimeJumped;
- (id)sockPuppetMessageForQueuePlayerAdvanceToNextItem;
- (id)sockPuppetMessageForQueuePlayerDestroy;
- (id)sockPuppetMessageForQueuePlayerRemoveAllItems;

@end
