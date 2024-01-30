@class GEOLatLng, PBUnknownFields;

@interface GEOPDFeatureIdGeocodingParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _featureId;
    GEOLatLng *_location;
    int _formattedAddressType;
    struct { unsigned char has_featureId : 1; unsigned char has_formattedAddressType : 1; } _flags;
}

@property (nonatomic) BOOL hasFeatureId;
@property (nonatomic) unsigned long long featureId;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) BOOL hasFormattedAddressType;
@property (nonatomic) int formattedAddressType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
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
- (id)formattedAddressTypeAsString:(int)a0;
- (int)StringAsFormattedAddressType:(id)a0;

@end
