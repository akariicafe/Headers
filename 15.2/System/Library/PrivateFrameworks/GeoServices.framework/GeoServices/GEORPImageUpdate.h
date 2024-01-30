@class NSString, NSData, GEORPPhotoMetadata, PBDataReader;

@interface GEORPImageUpdate : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_imageId;
    GEORPPhotoMetadata *_photoMetadata;
    NSData *_uploadResponse;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _action;
    struct { unsigned char has_action : 1; unsigned char read_imageId : 1; unsigned char read_photoMetadata : 1; unsigned char read_uploadResponse : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasImageId;
@property (retain, nonatomic) NSString *imageId;
@property (readonly, nonatomic) BOOL hasUploadResponse;
@property (retain, nonatomic) NSData *uploadResponse;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) int action;
@property (readonly, nonatomic) BOOL hasPhotoMetadata;
@property (retain, nonatomic) GEORPPhotoMetadata *photoMetadata;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)actionAsString:(int)a0;
- (int)StringAsAction:(id)a0;
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
