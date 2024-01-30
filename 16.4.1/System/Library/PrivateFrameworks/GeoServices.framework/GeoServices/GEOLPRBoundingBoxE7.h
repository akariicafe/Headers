@class GEOMapRegion;

@interface GEOLPRBoundingBoxE7 : PBCodable <NSCopying> {
    int _eastLngE7;
    int _northLatE7;
    int _southLatE7;
    int _westLngE7;
    struct { unsigned char has_eastLngE7 : 1; unsigned char has_northLatE7 : 1; unsigned char has_southLatE7 : 1; unsigned char has_westLngE7 : 1; } _flags;
}

@property (readonly, nonatomic) int centerLatE7;
@property (readonly, nonatomic) int centerLngE7;
@property (readonly, nonatomic) struct { double x0; double x1; } center;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) BOOL hasSouthLatE7;
@property (nonatomic) int southLatE7;
@property (nonatomic) BOOL hasWestLngE7;
@property (nonatomic) int westLngE7;
@property (nonatomic) BOOL hasNorthLatE7;
@property (nonatomic) int northLatE7;
@property (nonatomic) BOOL hasEastLngE7;
@property (nonatomic) int eastLngE7;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
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
