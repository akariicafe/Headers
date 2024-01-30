@class NSString, NSMutableArray;

@interface VCMediaNegotiationBlobVideoPayloadSettings : PBCodable <NSCopying>

@property (nonatomic) unsigned int payload;
@property (retain, nonatomic) NSMutableArray *videoRuleCollections;
@property (retain, nonatomic) NSString *featureString;
@property (nonatomic) unsigned int parameterSet;

+ (Class)videoRuleCollectionsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addVideoRuleCollections:(id)a0;
- (unsigned long long)videoRuleCollectionsCount;
- (void)clearVideoRuleCollections;
- (id)videoRuleCollectionsAtIndex:(unsigned long long)a0;

@end
