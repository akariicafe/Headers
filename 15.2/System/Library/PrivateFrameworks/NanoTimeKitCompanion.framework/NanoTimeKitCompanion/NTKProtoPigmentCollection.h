@class NSString, NTKProtoPigment, NTKProtoPigmentCollectionConfig, NSMutableArray;

@interface NTKProtoPigmentCollection : PBCodable <NSCopying> {
    struct { unsigned char isShared : 1; unsigned char isStub : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasConfig;
@property (retain, nonatomic) NTKProtoPigmentCollectionConfig *config;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasDefaultOption;
@property (retain, nonatomic) NTKProtoPigment *defaultOption;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *defaultGalleryColors;
@property (retain, nonatomic) NSMutableArray *collections;
@property (nonatomic) BOOL hasIsShared;
@property (nonatomic) BOOL isShared;
@property (nonatomic) BOOL hasIsStub;
@property (nonatomic) BOOL isStub;

+ (Class)itemsType;
+ (Class)collectionsType;
+ (Class)defaultGalleryColorsType;

- (void)addItems:(id)a0;
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
- (unsigned long long)itemsCount;
- (void)clearItems;
- (id)itemsAtIndex:(unsigned long long)a0;
- (unsigned long long)collectionsCount;
- (void)clearCollections;
- (unsigned long long)defaultGalleryColorsCount;
- (void)addDefaultGalleryColors:(id)a0;
- (void)addCollections:(id)a0;
- (id)collectionsAtIndex:(unsigned long long)a0;
- (void)clearDefaultGalleryColors;
- (id)defaultGalleryColorsAtIndex:(unsigned long long)a0;

@end
