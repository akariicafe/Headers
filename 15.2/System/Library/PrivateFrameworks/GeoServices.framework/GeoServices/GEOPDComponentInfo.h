@class GEOPDComponentFilter, PBUnknownFields;

@interface GEOPDComponentInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDComponentFilter *_filter;
    unsigned int _count;
    unsigned int _startIndex;
    int _type;
    int _urgency;
    BOOL _includeSource;
    struct { unsigned char has_count : 1; unsigned char has_startIndex : 1; unsigned char has_type : 1; unsigned char has_urgency : 1; unsigned char has_includeSource : 1; } _flags;
}

- (id)initWithType:(int)a0 count:(unsigned int)a1;
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
