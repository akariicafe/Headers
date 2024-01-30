@class PBDataReader, GEOTimezone, GEOPDBasemapRegionMetadata, GEOLatLng, PBUnknownFields;

@interface GEOPDPlaceInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _area;
    GEOPDBasemapRegionMetadata *_basemapRegionMetadata;
    GEOLatLng *_center;
    GEOLatLng *_enhancedCenter;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _knownAccuracy;
    BOOL _isApproximateCenter;
    struct { unsigned char has_area : 1; unsigned char has_knownAccuracy : 1; unsigned char has_isApproximateCenter : 1; unsigned char read_unknownFields : 1; unsigned char read_basemapRegionMetadata : 1; unsigned char read_center : 1; unsigned char read_enhancedCenter : 1; unsigned char read_timezone : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic) BOOL hasArea;
@property (nonatomic) double area;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (retain, nonatomic) GEOTimezone *timezone;
@property (nonatomic) BOOL hasIsApproximateCenter;
@property (nonatomic) BOOL isApproximateCenter;
@property (nonatomic) BOOL hasKnownAccuracy;
@property (nonatomic) int knownAccuracy;
@property (readonly, nonatomic) BOOL hasBasemapRegionMetadata;
@property (retain, nonatomic) GEOPDBasemapRegionMetadata *basemapRegionMetadata;
@property (readonly, nonatomic) BOOL hasEnhancedCenter;
@property (retain, nonatomic) GEOLatLng *enhancedCenter;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)placeInfoForPlaceData:(id)a0;
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
- (void)clearUnknownFields:(BOOL)a0;
- (id)knownAccuracyAsString:(int)a0;
- (id)initWithDictionary:(id)a0;
- (int)StringAsKnownAccuracy:(id)a0;

@end
