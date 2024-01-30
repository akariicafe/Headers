@class NSMutableArray;

@interface VKPIconPack : PBCodable <NSCopying>

@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NSMutableArray *atlas;
@property (retain, nonatomic) NSMutableArray *icons;

- (unsigned long long)iconsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addIcons:(id)a0;
- (void)clearIcons;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)atlasCount;
- (void)clearAtlas;
- (id)atlasAtIndex:(unsigned long long)a0;
- (id)description;
- (id)iconsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addAtlas:(id)a0;

@end
