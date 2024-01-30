@class NSMutableArray;

@interface VKPShieldPack : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *atlas;
@property (retain, nonatomic) NSMutableArray *shields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)atlasCount;
- (void)clearAtlas;
- (id)atlasAtIndex:(unsigned long long)a0;
- (id)description;
- (void)addShields:(id)a0;
- (unsigned long long)shieldsCount;
- (void)clearShields;
- (id)shieldsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addAtlas:(id)a0;

@end
