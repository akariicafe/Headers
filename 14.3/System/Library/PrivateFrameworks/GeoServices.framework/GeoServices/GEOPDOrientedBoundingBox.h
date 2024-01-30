@class GEOPDOrientedPosition;

@interface GEOPDOrientedBoundingBox : PBCodable <NSCopying> {
    double _depth;
    double _height;
    GEOPDOrientedPosition *_position;
    double _width;
    struct { unsigned char has_depth : 1; unsigned char has_height : 1; unsigned char has_width : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPosition;
@property (retain, nonatomic) GEOPDOrientedPosition *position;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) double width;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) double height;
@property (nonatomic) BOOL hasDepth;
@property (nonatomic) double depth;

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
- (id)initWithDictionary:(id)a0;

@end
