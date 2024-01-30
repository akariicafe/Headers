@class PBDataReader, GEOPDAttribution, NSString, GEOPDJoeColor, GEOPDPhoto, PBUnknownFields;

@interface GEOPDCaptionedPhoto : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAttribution *_attribution;
    NSString *_author;
    NSString *_caption;
    double _dateAdded;
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
    BOOL _obfuscateFullScreenPhoto;
    BOOL _useGallery;
    struct { unsigned char has_dateAdded : 1; unsigned char has_displayFullPhotoInline : 1; unsigned char has_displayFullScreenPhotoGallery : 1; unsigned char has_highQuality : 1; unsigned char has_isBusinessOwned : 1; unsigned char has_obfuscateFullScreenPhoto : 1; unsigned char has_useGallery : 1; unsigned char read_unknownFields : 1; unsigned char read_attribution : 1; unsigned char read_author : 1; unsigned char read_caption : 1; unsigned char read_joeColor : 1; unsigned char read_licenseDescription : 1; unsigned char read_licenseUrl : 1; unsigned char read_photo : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)captionedPhotosForPlaceData:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
