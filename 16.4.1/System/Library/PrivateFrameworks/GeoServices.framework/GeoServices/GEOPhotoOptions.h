@class PBUnknownFields;

@interface GEOPhotoOptions : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _photoSizes;
    int _maxPhotos;
    int _photoType;
    struct { unsigned char has_photoType : 1; } _flags;
}

@property (nonatomic) int maxPhotos;
@property (nonatomic) BOOL hasPhotoType;
@property (nonatomic) int photoType;
@property (readonly, nonatomic) unsigned long long photoSizesCount;
@property (readonly, nonatomic) int *photoSizes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (void)clearPhotoSizes;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (int)StringAsPhotoSizes:(id)a0;
- (int)StringAsPhotoType:(id)a0;
- (void)addPhotoSize:(int)a0;
- (int)photoSizeAtIndex:(unsigned long long)a0;
- (id)photoSizesAsString:(int)a0;
- (id)photoTypeAsString:(int)a0;
- (void)setPhotoSizes:(int *)a0 count:(unsigned long long)a1;

@end
