@class PBDataReader, GEOPDSearchPlaceContextMetadata, GEOPDAutocompletePlaceContextMetadata, PBUnknownFields;

@interface GEOPDPlaceContextMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompletePlaceContextMetadata *_autocompletePlaceContextMetadata;
    unsigned long long _muid;
    GEOPDSearchPlaceContextMetadata *_searchPlaceContextMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _placeContextMetadataType;
    struct { unsigned char has_muid : 1; unsigned char has_placeContextMetadataType : 1; unsigned char read_unknownFields : 1; unsigned char read_autocompletePlaceContextMetadata : 1; unsigned char read_searchPlaceContextMetadata : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) BOOL hasPlaceContextMetadataType;
@property (nonatomic) int placeContextMetadataType;
@property (readonly, nonatomic) BOOL hasSearchPlaceContextMetadata;
@property (retain, nonatomic) GEOPDSearchPlaceContextMetadata *searchPlaceContextMetadata;
@property (readonly, nonatomic) BOOL hasAutocompletePlaceContextMetadata;
@property (retain, nonatomic) GEOPDAutocompletePlaceContextMetadata *autocompletePlaceContextMetadata;
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
- (void)writeTo:(id)a0;
- (id)placeContextMetadataTypeAsString:(int)a0;
- (int)StringAsPlaceContextMetadataType:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
