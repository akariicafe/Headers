@class NSData, GEOLatLng, PBDataReader;

@interface GEORPPhotoWithMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    double _creationDate;
    NSData *_data;
    GEOLatLng *_geotagCoordinate;
    double _geotagHorizontalAccuracy;
    double _geotagTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_creationDate : 1; unsigned char has_geotagHorizontalAccuracy : 1; unsigned char has_geotagTimestamp : 1; unsigned char read_data : 1; unsigned char read_geotagCoordinate : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasData;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (readonly, nonatomic) BOOL hasGeotagCoordinate;
@property (retain, nonatomic) GEOLatLng *geotagCoordinate;
@property (nonatomic) BOOL hasGeotagHorizontalAccuracy;
@property (nonatomic) double geotagHorizontalAccuracy;
@property (nonatomic) BOOL hasGeotagTimestamp;
@property (nonatomic) double geotagTimestamp;

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
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
