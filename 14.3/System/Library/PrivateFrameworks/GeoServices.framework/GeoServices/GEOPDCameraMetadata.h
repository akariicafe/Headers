@class GEOPDOrientedPosition, GEOPDLensProjection, PBDataReader;

@interface GEOPDCameraMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _textureIds;
    GEOPDLensProjection *_lensProjection;
    GEOPDOrientedPosition *_position;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _cameraNumber;
    int _imageHeight;
    int _imageWidth;
    struct { unsigned char has_cameraNumber : 1; unsigned char has_imageHeight : 1; unsigned char has_imageWidth : 1; unsigned char read_textureIds : 1; unsigned char read_lensProjection : 1; unsigned char read_position : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasCameraNumber;
@property (nonatomic) int cameraNumber;
@property (nonatomic) BOOL hasImageWidth;
@property (nonatomic) int imageWidth;
@property (nonatomic) BOOL hasImageHeight;
@property (nonatomic) int imageHeight;
@property (readonly, nonatomic) BOOL hasLensProjection;
@property (retain, nonatomic) GEOPDLensProjection *lensProjection;
@property (readonly, nonatomic) BOOL hasPosition;
@property (retain, nonatomic) GEOPDOrientedPosition *position;
@property (readonly, nonatomic) unsigned long long textureIdsCount;
@property (readonly, nonatomic) unsigned int *textureIds;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void)clearTextureIds;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)setTextureIds:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned int)textureIdAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (void)addTextureId:(unsigned int)a0;

@end
