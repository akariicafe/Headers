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

+ (Class)localizedNameType;
+ (id)_allCategoriesForPlaceData:(id)a0 type:(unsigned int)a1;
+ (id)categoryNamesForPlaceData:(id)a0 type:(unsigned int)a1;
+ (BOOL)hasCategoryNamesForPlaceData:(id)a0 type:(unsigned int)a1;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addLocalizedName:(id)a0;
- (void)clearLocalizedNames;
- (id)localizedNameAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)localizedNamesCount;

@end
