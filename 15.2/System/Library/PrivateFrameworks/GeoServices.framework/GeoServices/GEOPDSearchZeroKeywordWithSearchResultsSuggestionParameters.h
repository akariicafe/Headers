@class PBUnknownFields;

@interface GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _blurredHourOfDay;
    unsigned int _dayOfWeek;
    unsigned int _maxCategories;
    unsigned int _maxResultsPerCategory;
    struct { unsigned char has_blurredHourOfDay : 1; unsigned char has_dayOfWeek : 1; unsigned char has_maxCategories : 1; unsigned char has_maxResultsPerCategory : 1; } _flags;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
