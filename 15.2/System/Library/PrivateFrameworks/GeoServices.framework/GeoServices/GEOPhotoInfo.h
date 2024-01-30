@class NSString, PBUnknownFields;

@interface GEOPhotoInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_url;
    int _size;
    struct { unsigned char has_size : 1; } _flags;
}

@property (nonatomic) BOOL hasSize;
@property (nonatomic) int size;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)sizeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (int)StringAsSize:(id)a0;
- (id)description;
- (id)initWithPlaceDataPhotoContent:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
