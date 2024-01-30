@class NSString;

@interface SPProtoAudioFilePlayerUpdateContainedIdentifier : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasContainedIdentifier;
@property (retain, nonatomic) NSString *containedIdentifier;

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
- (id)sockPuppetMessageForPlayerItemUpsertWithAsset;
- (id)sockPuppetMessageForQueuePlayerReplaceCurrentItem;
- (id)sockPuppetMessageForQueuePlayerAppendItem;
- (id)sockPuppetMessageForQueuePlayerRemoveItem;
- (id)sockPuppetMessageForQueuePlayerSetCurrentItem;

@end
