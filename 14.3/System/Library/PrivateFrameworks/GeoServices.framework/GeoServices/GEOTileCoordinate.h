@class PBUnknownFields;

@interface GEOTileCoordinate : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _x;
    int _y;
    int _zoom;
    struct { unsigned char has_x : 1; unsigned char has_y : 1; unsigned char has_zoom : 1; } _flags;
}

@property (nonatomic) BOOL hasX;
@property (nonatomic) int x;
@property (nonatomic) BOOL hasY;
@property (nonatomic) int y;
@property (nonatomic) BOOL hasZoom;
@property (nonatomic) int zoom;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
