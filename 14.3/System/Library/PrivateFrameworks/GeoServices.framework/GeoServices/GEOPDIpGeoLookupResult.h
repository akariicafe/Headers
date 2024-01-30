@class PBDataReader, NSString, GEOLatLng, PBUnknownFields;

@interface GEOPDIpGeoLookupResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_countryCode;
    NSString *_ipAddress;
    GEOLatLng *_location;
    NSString *_timeZome;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _status;
    struct { unsigned char has_status : 1; unsigned char read_unknownFields : 1; unsigned char read_countryCode : 1; unsigned char read_ipAddress : 1; unsigned char read_location : 1; unsigned char read_timeZome : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasIpAddress;
@property (retain, nonatomic) NSString *ipAddress;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL hasTimeZome;
@property (retain, nonatomic) NSString *timeZome;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsStatus:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)statusAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
