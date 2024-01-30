@class GEORPAddress;

@interface GEORPPersonalizedMaps : PBCodable <NSCopying> {
    GEORPAddress *_address;
    int _addressType;
    int _placeType;
    struct { unsigned char has_addressType : 1; unsigned char has_placeType : 1; } _flags;
}

@property (nonatomic) BOOL hasAddressType;
@property (nonatomic) int addressType;
@property (nonatomic) BOOL hasPlaceType;
@property (nonatomic) int placeType;
@property (readonly, nonatomic) BOOL hasAddress;
@property (retain, nonatomic) GEORPAddress *address;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)addressTypeAsString:(int)a0;
- (int)StringAsAddressType:(id)a0;
- (id)placeTypeAsString:(int)a0;
- (int)StringAsPlaceType:(id)a0;
- (id)dictionaryRepresentation;

@end
