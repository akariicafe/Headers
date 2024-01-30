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

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
