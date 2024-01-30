@class PBUnknownFields, PBDataReader, GEORPPoiImageFeedbackContext, GEORPPoiImageFeedbackCorrections;

@interface GEORPPoiImageFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPPoiImageFeedbackContext *_poiImageContext;
    GEORPPoiImageFeedbackCorrections *_poiImageCorrections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_poiImageContext : 1; unsigned char read_poiImageCorrections : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPoiImageContext;
@property (retain, nonatomic) GEORPPoiImageFeedbackContext *poiImageContext;
@property (readonly, nonatomic) BOOL hasPoiImageCorrections;
@property (retain, nonatomic) GEORPPoiImageFeedbackCorrections *poiImageCorrections;
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
