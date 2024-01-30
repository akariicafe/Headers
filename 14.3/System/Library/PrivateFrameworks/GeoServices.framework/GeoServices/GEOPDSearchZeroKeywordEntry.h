@class PBUnknownFields;

@interface GEOPDSearchZeroKeywordEntry : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _categoryIndexs;
    unsigned int _dayOfWeek;
    unsigned int _hourOfDay;
    struct { unsigned char has_dayOfWeek : 1; unsigned char has_hourOfDay : 1; } _flags;
}

@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) unsigned int dayOfWeek;
@property (nonatomic) BOOL hasHourOfDay;
@property (nonatomic) unsigned int hourOfDay;
@property (readonly, nonatomic) unsigned long long categoryIndexsCount;
@property (readonly, nonatomic) unsigned int *categoryIndexs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)addCategoryIndex:(unsigned int)a0;
- (void)clearCategoryIndexs;
- (unsigned int)categoryIndexAtIndex:(unsigned long long)a0;
- (void)setCategoryIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
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

@end
