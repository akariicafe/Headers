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
- (void)clearHapCharacteristics;
- (void)addHapCharacteristics:(id)a0;
- (unsigned long long)hapCharacteristicsCount;
- (id)hapCharacteristicsAtIndex:(unsigned long long)a0;
- (void)clearHapServices;
- (void)addHapServices:(id)a0;
- (unsigned long long)hapServicesCount;
- (id)hapServicesAtIndex:(unsigned long long)a0;
- (void)clearHapCategories;
- (void)addHapCategories:(id)a0;
- (unsigned long long)hapCategoriesCount;
- (id)hapCategoriesAtIndex:(unsigned long long)a0;

@end
