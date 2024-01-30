@interface GEOLocationShiftResponse : PBCodable <NSCopying> {
    struct GEOPixelPoint { double _x; double _y; int _z; struct { unsigned char z : 1; } _has; } _shiftedPixel;
}

@property (nonatomic) struct GEOPixelPoint { double x0; double x1; int x2; struct { unsigned char x0 : 1; } x3; } shiftedPixel;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
