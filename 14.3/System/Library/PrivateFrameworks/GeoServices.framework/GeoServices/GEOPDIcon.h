@class GEOPDPhoto, PBUnknownFields;

@interface GEOPDIcon : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDPhoto *_image;
    int _iconType;
    struct { unsigned char has_iconType : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasImage;
@property (retain, nonatomic) GEOPDPhoto *image;
@property (nonatomic) BOOL hasIconType;
@property (nonatomic) int iconType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)iconTypeAsString:(int)a0;
- (int)StringAsIconType:(id)a0;
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
