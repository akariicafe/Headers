@class NSData;

@interface VKPTextureAtlas : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *texture;
@property (nonatomic) unsigned int quadWidth;
@property (nonatomic) unsigned int quadHeight;

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

@end
