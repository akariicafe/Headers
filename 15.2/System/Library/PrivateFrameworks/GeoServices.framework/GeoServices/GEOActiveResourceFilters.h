@class PBUnknownFields;

@interface GEOActiveResourceFilters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct GEOActiveResourceFilter { double x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *_filters;
    unsigned long long _filtersCount;
    unsigned long long _filtersSpace;
}

@property (readonly, nonatomic) unsigned long long filtersCount;
@property (readonly, nonatomic) struct GEOActiveResourceFilter { double x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *filters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addFilter:(struct GEOActiveResourceFilter { double x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; })a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (struct GEOActiveResourceFilter { double x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; })filterAtIndex:(unsigned long long)a0;
- (void)setFilters:(struct GEOActiveResourceFilter { double x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *)a0 count:(unsigned long long)a1;
- (void)clearFilters;
- (id)dictionaryRepresentation;

@end
