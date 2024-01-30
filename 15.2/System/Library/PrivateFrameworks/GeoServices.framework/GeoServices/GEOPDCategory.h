@class NSMutableArray, PBUnknownFields;

@interface GEOPDCategory : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_localizedNames;
    int _level;
    struct { unsigned char has_level : 1; } _flags;
}

@property (nonatomic) BOOL hasLevel;
@property (nonatomic) int level;
@property (retain, nonatomic) NSMutableArray *localizedNames;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)_allCategoriesForPlaceData:(id)a0 type:(unsigned int)a1;
+ (id)categoryNamesForPlaceData:(id)a0 type:(unsigned int)a1;
+ (BOOL)hasCategoryNamesForPlaceData:(id)a0 type:(unsigned int)a1;
+ (BOOL)isValid:(id)a0;
+ (Class)localizedNameType;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)localizedNamesCount;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addLocalizedName:(id)a0;
- (void)clearLocalizedNames;
- (id)localizedNameAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
