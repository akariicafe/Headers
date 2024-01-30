@class PBDataReader, GEORPAddressCorrections, GEORPPersonalizedMapsContext, GEOPDPlace, GEOPDPlaceRequest, PBUnknownFields;

@interface GEORPAddressFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAddressCorrections *_address;
    GEORPPersonalizedMapsContext *_personalizedMaps;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlace *_place;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_address : 1; unsigned char read_personalizedMaps : 1; unsigned char read_placeRequest : 1; unsigned char read_place : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasAddress;
@property (retain, nonatomic) GEORPAddressCorrections *address;
@property (readonly, nonatomic) BOOL hasPlace;
@property (retain, nonatomic) GEOPDPlace *place;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasPersonalizedMaps;
@property (retain, nonatomic) GEORPPersonalizedMapsContext *personalizedMaps;
@property (readonly, nonatomic) BOOL hasPlaceRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (int)StringAsType:(id)a0;
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
- (id)typeAsString:(int)a0;

@end
