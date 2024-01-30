@class NSString, GEOCoarseLocationPolygon, PBDataReader;

@interface GEOCoarseLocationTerritoryInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _coordinates;
    struct GEOCoarseLocationLatLng { double _lat; double _lng; } _representativePoint;
    double _areaDegrees;
    double _areaRatio;
    NSString *_countryNameStr;
    unsigned long long _featureId;
    double _maxDistanceMeters;
    GEOCoarseLocationPolygon *_polygon;
    NSString *_regionNameStr;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _countryName;
    unsigned int _regionName;
    int _representativePointQuality;
    unsigned int _revgeoRank;
    int _territoryType;
    BOOL _precise;
    BOOL _shouldRandomize;
    struct { unsigned char has_representativePoint : 1; unsigned char has_areaDegrees : 1; unsigned char has_areaRatio : 1; unsigned char has_featureId : 1; unsigned char has_maxDistanceMeters : 1; unsigned char has_countryName : 1; unsigned char has_regionName : 1; unsigned char has_representativePointQuality : 1; unsigned char has_revgeoRank : 1; unsigned char has_territoryType : 1; unsigned char has_precise : 1; unsigned char has_shouldRandomize : 1; unsigned char read_coordinates : 1; unsigned char read_countryNameStr : 1; unsigned char read_polygon : 1; unsigned char read_regionNameStr : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasTerritoryType;
@property (nonatomic) int territoryType;
@property (nonatomic) BOOL hasRegionName;
@property (nonatomic) unsigned int regionName;
@property (nonatomic) BOOL hasCountryName;
@property (nonatomic) unsigned int countryName;
@property (readonly, nonatomic) unsigned long long coordinatesCount;
@property (readonly, nonatomic) unsigned int *coordinates;
@property (nonatomic) BOOL hasPrecise;
@property (nonatomic) BOOL precise;
@property (nonatomic) BOOL hasFeatureId;
@property (nonatomic) unsigned long long featureId;
@property (nonatomic) BOOL hasRepresentativePoint;
@property (nonatomic) struct GEOCoarseLocationLatLng { double x0; double x1; } representativePoint;
@property (nonatomic) BOOL hasAreaDegrees;
@property (nonatomic) double areaDegrees;
@property (nonatomic) BOOL hasRevgeoRank;
@property (nonatomic) unsigned int revgeoRank;
@property (nonatomic) BOOL hasAreaRatio;
@property (nonatomic) double areaRatio;
@property (nonatomic) BOOL hasMaxDistanceMeters;
@property (nonatomic) double maxDistanceMeters;
@property (readonly, nonatomic) BOOL hasRegionNameStr;
@property (retain, nonatomic) NSString *regionNameStr;
@property (readonly, nonatomic) BOOL hasCountryNameStr;
@property (retain, nonatomic) NSString *countryNameStr;
@property (readonly, nonatomic) BOOL hasPolygon;
@property (retain, nonatomic) GEOCoarseLocationPolygon *polygon;
@property (nonatomic) BOOL hasRepresentativePointQuality;
@property (nonatomic) int representativePointQuality;
@property (nonatomic) BOOL hasShouldRandomize;
@property (nonatomic) BOOL shouldRandomize;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addCoordinates:(unsigned int)a0;
- (void)clearCoordinates;
- (unsigned int)coordinatesAtIndex:(unsigned long long)a0;
- (id)territoryTypeAsString:(int)a0;
- (int)StringAsTerritoryType:(id)a0;
- (void)setCoordinates:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)representativePointQualityAsString:(int)a0;
- (int)StringAsRepresentativePointQuality:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
