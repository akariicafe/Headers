@class PBDataReader, NSString, GEOPDPlace, GEORPFeedbackClientImageInfo, PBUnknownFields;

@interface GEORPPoiImageFeedbackContext : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPFeedbackClientImageInfo *_imageInfo;
    NSString *_imageUrl;
    GEOPDPlace *_place;
    NSString *_providerImageId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_imageInfo : 1; unsigned char read_imageUrl : 1; unsigned char read_place : 1; unsigned char read_providerImageId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPlace;
@property (retain, nonatomic) GEOPDPlace *place;
@property (readonly, nonatomic) BOOL hasProviderImageId;
@property (retain, nonatomic) NSString *providerImageId;
@property (readonly, nonatomic) BOOL hasImageUrl;
@property (retain, nonatomic) NSString *imageUrl;
@property (readonly, nonatomic) BOOL hasImageInfo;
@property (retain, nonatomic) GEORPFeedbackClientImageInfo *imageInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
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
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
