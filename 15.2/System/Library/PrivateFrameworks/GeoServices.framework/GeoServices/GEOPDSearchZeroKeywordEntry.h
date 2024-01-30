@class PBUnknownFields;

@interface GEOPDSearchZeroKeywordEntry : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _categoryIndexs;
    unsigned int _dayOfWeek;
    unsigned int _hourOfDay;
    struct { unsigned char has_dayOfWeek : 1; unsigned char has_hourOfDay : 1; } _flags;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
