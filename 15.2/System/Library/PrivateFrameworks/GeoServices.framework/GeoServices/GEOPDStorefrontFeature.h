@class GEOPDOrientedBoundingBox;

@interface GEOPDStorefrontFeature : PBCodable <NSCopying> {
    GEOPDOrientedBoundingBox *_geometry;
    int _type;
    struct { unsigned char has_type : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasGeometry;
@property (retain, nonatomic) GEOPDOrientedBoundingBox *geometry;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
