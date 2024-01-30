@class NSString;

@interface GEOVLFUsageTileID : PBCodable <NSCopying> {
    NSString *_buildId;
    double _uncertainty;
    double _xCoordinate;
    double _yCoordinate;
    struct { unsigned char has_uncertainty : 1; unsigned char has_xCoordinate : 1; unsigned char has_yCoordinate : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasBuildId;
@property (retain, nonatomic) NSString *buildId;
@property (nonatomic) BOOL hasXCoordinate;
@property (nonatomic) double xCoordinate;
@property (nonatomic) BOOL hasYCoordinate;
@property (nonatomic) double yCoordinate;
@property (nonatomic) BOOL hasUncertainty;
@property (nonatomic) double uncertainty;

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
- (void).cxx_destruct;

@end
