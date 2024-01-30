@class NSMutableArray, PBUnknownFields;

@interface GEOPDPictureItemContainer : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_pictureItems;
    BOOL _allowFullScreenPhoto;
    struct { unsigned char has_allowFullScreenPhoto : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *pictureItems;
@property (nonatomic) BOOL hasAllowFullScreenPhoto;
@property (nonatomic) BOOL allowFullScreenPhoto;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)pictureItemType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)addPictureItem:(id)a0;
- (unsigned long long)pictureItemsCount;
- (void)clearPictureItems;
- (id)pictureItemAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
