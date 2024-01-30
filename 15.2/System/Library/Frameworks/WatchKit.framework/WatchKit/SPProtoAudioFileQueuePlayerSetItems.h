@class NSString, NSMutableArray;

@interface SPProtoAudioFileQueuePlayerSetItems : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *playerItemIdentifiers;

+ (Class)playerItemIdentifiersType;

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
- (void)addPlayerItemIdentifiers:(id)a0;
- (unsigned long long)playerItemIdentifiersCount;
- (void)clearPlayerItemIdentifiers;
- (id)playerItemIdentifiersAtIndex:(unsigned long long)a0;
- (id)sockPuppetMessage;

@end
