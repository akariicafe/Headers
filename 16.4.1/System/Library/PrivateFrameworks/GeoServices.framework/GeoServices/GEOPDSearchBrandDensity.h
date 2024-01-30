@class NSString;

@interface GEOPDSearchBrandDensity : PBCodable <NSCopying> {
    unsigned long long _count;
    NSString *_geohash;
    float _popularitySum;
    struct { unsigned char has_count : 1; unsigned char has_popularitySum : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
