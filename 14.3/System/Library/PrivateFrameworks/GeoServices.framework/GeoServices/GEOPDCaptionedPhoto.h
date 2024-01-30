@class PBUnknownFields, NSString, GEOPDJoeColor, PBDataReader, GEOPDPhoto;

@interface GEOPDCaptionedPhoto : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_author;
    NSString *_caption;
    GEOPDJoeColor *_joeColor;
    NSString *_licenseDescription;
    NSString *_licenseUrl;
    GEOPDPhoto *_photo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _displayFullPhotoInline;
    BOOL _displayFullScreenPhotoGallery;
    BOOL _highQuality;
    BOOL _isBusinessOwned;
    BOOL _useGallery;
    struct { unsigned char has_displayFullPhotoInline : 1; unsigned char has_displayFullScreenPhotoGallery : 1; unsigned char has_highQuality : 1; unsigned char has_isBusinessOwned : 1; unsigned char has_useGallery : 1; unsigned char read_unknownFields : 1; unsigned char read_author : 1; unsigned char read_caption : 1; unsigned char read_joeColor : 1; unsigned char read_licenseDescription : 1; unsigned char read_licenseUrl : 1; unsigned char read_photo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCaption;
@property (retain, nonatomic) NSString *caption;
@property (readonly, nonatomic) BOOL hasAuthor;
@property (retain, nonatomic) NSString *author;
@property (readonly, nonatomic) BOOL hasLicenseDescription;
@property (retain, nonatomic) NSString *licenseDescription;
@property (readonly, nonatomic) BOOL hasLicenseUrl;
@property (retain, nonatomic) NSString *licenseUrl;
@property (readonly, nonatomic) BOOL hasPhoto;
@property (retain, nonatomic) GEOPDPhoto *photo;
@property (nonatomic) BOOL hasDisplayFullPhotoInline;
@property (nonatomic) BOOL displayFullPhotoInline;
@property (nonatomic) BOOL hasUseGallery;
@property (nonatomic) BOOL useGallery;
@property (nonatomic) BOOL hasHighQuality;
@property (nonatomic) BOOL highQuality;
@property (nonatomic) BOOL hasIsBusinessOwned;
@property (nonatomic) BOOL isBusinessOwned;
@property (nonatomic) BOOL hasDisplayFullScreenPhotoGallery;
@property (nonatomic) BOOL displayFullScreenPhotoGallery;
@property (readonly, nonatomic) BOOL hasJoeColor;
@property (retain, nonatomic) GEOPDJoeColor *joeColor;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)captionedPhotosForPlaceData:(id)a0;
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
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
