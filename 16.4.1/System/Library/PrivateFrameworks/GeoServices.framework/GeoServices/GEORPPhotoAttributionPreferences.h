@class NSString, PBDataReader;

@interface GEORPPhotoAttributionPreferences : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_attributionName;
    NSString *_version;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _attributePhotos;
    BOOL _wasCleared;
    struct { unsigned char has_attributePhotos : 1; unsigned char has_wasCleared : 1; unsigned char read_attributionName : 1; unsigned char read_version : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) BOOL hasAttributePhotos;
@property (nonatomic) BOOL attributePhotos;
@property (readonly, nonatomic) BOOL hasAttributionName;
@property (retain, nonatomic) NSString *attributionName;
@property (nonatomic) BOOL hasWasCleared;
@property (nonatomic) BOOL wasCleared;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
