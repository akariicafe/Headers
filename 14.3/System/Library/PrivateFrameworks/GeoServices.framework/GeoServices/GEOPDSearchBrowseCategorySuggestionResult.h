@class NSMutableArray, PBUnknownFields;

@interface GEOPDSearchBrowseCategorySuggestionResult : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_categorys;
}

@property (retain, nonatomic) NSMutableArray *categorys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)categoryType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addCategory:(id)a0;
- (id)jsonRepresentation;
- (unsigned long long)categorysCount;
- (id)categoryAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)clearCategorys;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
