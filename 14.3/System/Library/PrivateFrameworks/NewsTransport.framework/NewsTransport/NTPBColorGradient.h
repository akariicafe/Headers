@class NSMutableArray;

@interface NTPBColorGradient : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _locations;
    struct { unsigned char endPointX : 1; unsigned char endPointY : 1; unsigned char startPointX : 1; unsigned char startPointY : 1; } _has;
}

@property (nonatomic) BOOL hasStartPointX;
@property (nonatomic) double startPointX;
@property (nonatomic) BOOL hasStartPointY;
@property (nonatomic) double startPointY;
@property (nonatomic) BOOL hasEndPointX;
@property (nonatomic) double endPointX;
@property (nonatomic) BOOL hasEndPointY;
@property (nonatomic) double endPointY;
@property (retain, nonatomic) NSMutableArray *colors;
@property (readonly, nonatomic) unsigned long long locationsCount;
@property (readonly, nonatomic) double *locations;

+ (Class)colorType;

- (void)addLocation:(double)a0;
- (void)clearLocations;
- (double)locationAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (id)colorAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)setLocations:(double *)a0 count:(unsigned long long)a1;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addColor:(id)a0;
- (unsigned long long)colorsCount;
- (void)clearColors;

@end
