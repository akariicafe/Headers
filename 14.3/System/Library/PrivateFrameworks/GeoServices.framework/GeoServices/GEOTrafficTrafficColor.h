@class GEOTrafficPath;

@interface GEOTrafficTrafficColor : PBCodable <NSCopying> {
    GEOTrafficPath *_path;
    int _color;
    struct { unsigned char has_color : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPath;
@property (retain, nonatomic) GEOTrafficPath *path;
@property (nonatomic) BOOL hasColor;
@property (nonatomic) int color;

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
- (id)colorAsString:(int)a0;
- (int)StringAsColor:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
