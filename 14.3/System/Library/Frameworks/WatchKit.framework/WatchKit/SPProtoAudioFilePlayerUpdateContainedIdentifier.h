@class NSString;

@interface SPProtoAudioFilePlayerUpdateContainedIdentifier : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasContainedIdentifier;
@property (retain, nonatomic) NSString *containedIdentifier;

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
- (id)sockPuppetMessageForPlayerItemUpsertWithAsset;
- (id)sockPuppetMessageForQueuePlayerReplaceCurrentItem;
- (id)sockPuppetMessageForQueuePlayerAppendItem;
- (id)sockPuppetMessageForQueuePlayerRemoveItem;
- (id)sockPuppetMessageForQueuePlayerSetCurrentItem;

@end
