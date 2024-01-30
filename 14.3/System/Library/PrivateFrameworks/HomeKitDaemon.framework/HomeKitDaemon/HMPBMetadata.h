@class NSMutableArray;

@interface HMPBMetadata : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (retain, nonatomic) NSMutableArray *hapCharacteristics;
@property (retain, nonatomic) NSMutableArray *hapServices;
@property (retain, nonatomic) NSMutableArray *hapCategories;

+ (Class)hapCharacteristicsType;
+ (Class)hapServicesType;
+ (Class)hapCategoriesType;

- (unsigned long long)hapCharacteristicsCount;
- (unsigned long long)hapServicesCount;
- (unsigned long long)hapCategoriesCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addHapCharacteristics:(id)a0;
- (void)addHapServices:(id)a0;
- (void)addHapCategories:(id)a0;
- (void)clearHapCharacteristics;
- (void)clearHapServices;
- (id)hapCharacteristicsAtIndex:(unsigned long long)a0;
- (id)hapServicesAtIndex:(unsigned long long)a0;
- (void)clearHapCategories;
- (id)hapCategoriesAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
