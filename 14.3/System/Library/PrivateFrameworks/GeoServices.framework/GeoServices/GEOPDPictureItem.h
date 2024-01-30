@class PBUnknownFields, NSString, PBDataReader, GEOPDPhoto;

@interface GEOPDPictureItem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDPhoto *_photo;
    NSString *_primaryText;
    NSString *_secondaryText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _photoItemType;
    struct { unsigned char has_photoItemType : 1; unsigned char read_unknownFields : 1; unsigned char read_photo : 1; unsigned char read_primaryText : 1; unsigned char read_secondaryText : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPhoto;
@property (retain, nonatomic) GEOPDPhoto *photo;
@property (readonly, nonatomic) BOOL hasPrimaryText;
@property (retain, nonatomic) NSString *primaryText;
@property (readonly, nonatomic) BOOL hasSecondaryText;
@property (retain, nonatomic) NSString *secondaryText;
@property (nonatomic) BOOL hasPhotoItemType;
@property (nonatomic) int photoItemType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (id)photoItemTypeAsString:(int)a0;
- (int)StringAsPhotoItemType:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
