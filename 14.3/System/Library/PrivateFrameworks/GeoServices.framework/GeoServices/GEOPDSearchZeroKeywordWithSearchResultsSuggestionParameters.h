@class PBUnknownFields;

@interface GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _blurredHourOfDay;
    unsigned int _dayOfWeek;
    unsigned int _maxCategories;
    unsigned int _maxResultsPerCategory;
    struct { unsigned char has_blurredHourOfDay : 1; unsigned char has_dayOfWeek : 1; unsigned char has_maxCategories : 1; unsigned char has_maxResultsPerCategory : 1; } _flags;
}

@property (nonatomic) BOOL hasMaxCategories;
@property (nonatomic) unsigned int maxCategories;
@property (nonatomic) BOOL hasMaxResultsPerCategory;
@property (nonatomic) unsigned int maxResultsPerCategory;
@property (nonatomic) BOOL hasBlurredHourOfDay;
@property (nonatomic) unsigned int blurredHourOfDay;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) unsigned int dayOfWeek;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
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
