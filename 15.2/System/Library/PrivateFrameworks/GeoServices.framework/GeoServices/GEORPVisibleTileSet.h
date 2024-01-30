@interface GEORPVisibleTileSet : PBCodable <NSCopying> {
    struct GEORPVisibleTileKey { unsigned int x0; unsigned int x1; unsigned int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *_tileKeys;
    unsigned long long _tileKeysCount;
    unsigned long long _tileKeysSpace;
    unsigned int _identifier;
    int _style;
    struct { unsigned char has_identifier : 1; unsigned char has_style : 1; } _flags;
}

@property (nonatomic) BOOL hasStyle;
@property (nonatomic) int style;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (readonly, nonatomic) unsigned long long tileKeysCount;
@property (readonly, nonatomic) struct GEORPVisibleTileKey { unsigned int x0; unsigned int x1; unsigned int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *tileKeys;

+ (BOOL)isValid:(id)a0;

- (int)StringAsStyle:(id)a0;
- (void)readAll:(BOOL)a0;
- (id)styleAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)addTileKey:(struct GEORPVisibleTileKey { unsigned int x0; unsigned int x1; unsigned int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; })a0;
- (void)clearTileKeys;
- (struct GEORPVisibleTileKey { unsigned int x0; unsigned int x1; unsigned int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; })tileKeyAtIndex:(unsigned long long)a0;
- (void)setTileKeys:(struct GEORPVisibleTileKey { unsigned int x0; unsigned int x1; unsigned int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *)a0 count:(unsigned long long)a1;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
