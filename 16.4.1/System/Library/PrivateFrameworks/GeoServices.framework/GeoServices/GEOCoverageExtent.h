@class PBUnknownFields;

@interface GEOCoverageExtent : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct GEOCoverageException { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; } *_coverageExceptions;
    unsigned long long _coverageExceptionsCount;
    unsigned long long _coverageExceptionsSpace;
    unsigned int _maxX;
    unsigned int _maxY;
    unsigned int _minX;
    unsigned int _minY;
    unsigned int _zoom;
    struct { unsigned char has_maxX : 1; unsigned char has_maxY : 1; unsigned char has_minX : 1; unsigned char has_minY : 1; unsigned char has_zoom : 1; } _flags;
}

@property (nonatomic) BOOL hasMinX;
@property (nonatomic) unsigned int minX;
@property (nonatomic) BOOL hasMinY;
@property (nonatomic) unsigned int minY;
@property (nonatomic) BOOL hasMaxX;
@property (nonatomic) unsigned int maxX;
@property (nonatomic) BOOL hasMaxY;
@property (nonatomic) unsigned int maxY;
@property (nonatomic) BOOL hasZoom;
@property (nonatomic) unsigned int zoom;
@property (readonly, nonatomic) unsigned long long coverageExceptionsCount;
@property (readonly, nonatomic) struct GEOCoverageException { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; } *coverageExceptions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (void)addCoverageException:(struct GEOCoverageException { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; })a0;
- (void)clearCoverageExceptions;
- (struct GEOCoverageException { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; })coverageExceptionAtIndex:(unsigned long long)a0;
- (void)setCoverageExceptions:(struct GEOCoverageException { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x5; } *)a0 count:(unsigned long long)a1;

@end
