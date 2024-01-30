@class NSString, NSMutableArray;

@interface NPKProtoStandaloneRequestHeader : PBCodable <NSCopying>

@property (nonatomic) int protocolVersion;
@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (retain, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) BOOL hasStepIdentifier;
@property (retain, nonatomic) NSString *stepIdentifier;
@property (retain, nonatomic) NSMutableArray *cachedHeroImages;

+ (Class)cachedHeroImagesType;

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
- (id)protocolVersionAsString:(int)a0;
- (int)StringAsProtocolVersion:(id)a0;
- (void)addCachedHeroImages:(id)a0;
- (unsigned long long)cachedHeroImagesCount;
- (void)clearCachedHeroImages;
- (id)cachedHeroImagesAtIndex:(unsigned long long)a0;

@end
