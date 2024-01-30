@class NSMutableArray;

@interface CPLSuggestionRecordList : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *assets;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSMutableArray *persons;
@property (retain, nonatomic) NSMutableArray *memorys;

+ (Class)assetType;
+ (Class)personType;
+ (Class)memoryType;

- (unsigned long long)assetsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearAssets;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)personAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)addAsset:(id)a0;
- (unsigned long long)personsCount;
- (unsigned long long)memorysCount;
- (id)dictionaryRepresentation;
- (id)assetAtIndex:(unsigned long long)a0;
- (void)clearPersons;
- (void)addPerson:(id)a0;
- (void)clearMemorys;
- (void)addMemory:(id)a0;
- (id)memoryAtIndex:(unsigned long long)a0;

@end
