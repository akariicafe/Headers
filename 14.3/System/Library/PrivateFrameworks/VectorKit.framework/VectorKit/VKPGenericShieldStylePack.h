@class NSMutableArray;

@interface VKPGenericShieldStylePack : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *textureAtlas;
@property (retain, nonatomic) NSMutableArray *genericShields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (void)addTextureAtlas:(id)a0;
- (void)addGenericShield:(id)a0;
- (unsigned long long)textureAtlasCount;
- (void)clearTextureAtlas;
- (id)textureAtlasAtIndex:(unsigned long long)a0;
- (unsigned long long)genericShieldsCount;
- (void)clearGenericShields;
- (id)genericShieldAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
