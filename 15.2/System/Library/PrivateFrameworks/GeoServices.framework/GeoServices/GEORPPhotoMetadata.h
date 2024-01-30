@class NSString, GEOLocation, PBDataReader;

@interface GEORPPhotoMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_clientImageUuid;
    NSString *_deviceLensMake;
    NSString *_deviceLensModel;
    GEOLocation *_geotag;
    NSString *_imageDescription;
    NSString *_mediaType;
    unsigned long long _size;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _source;
    struct { unsigned char has_size : 1; unsigned char has_source : 1; unsigned char read_clientImageUuid : 1; unsigned char read_deviceLensMake : 1; unsigned char read_deviceLensModel : 1; unsigned char read_geotag : 1; unsigned char read_imageDescription : 1; unsigned char read_mediaType : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasClientImageUuid;
@property (retain, nonatomic) NSString *clientImageUuid;
@property (readonly, nonatomic) BOOL hasImageDescription;
@property (retain, nonatomic) NSString *imageDescription;
@property (readonly, nonatomic) BOOL hasGeotag;
@property (retain, nonatomic) GEOLocation *geotag;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) unsigned long long size;
@property (readonly, nonatomic) BOOL hasMediaType;
@property (retain, nonatomic) NSString *mediaType;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (readonly, nonatomic) BOOL hasDeviceLensMake;
@property (retain, nonatomic) NSString *deviceLensMake;
@property (readonly, nonatomic) BOOL hasDeviceLensModel;
@property (retain, nonatomic) NSString *deviceLensModel;

+ (BOOL)isValid:(id)a0;

- (id)sourceAsString:(int)a0;
- (int)StringAsSource:(id)a0;
- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
