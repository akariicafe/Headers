@class CLPMeta, CLPContext, CLPLocation, NSMutableArray;

@interface CLPAltimeterCollectionRequest : PBRequest <NSCopying> {
    struct { unsigned char startTimestamp : 1; unsigned char stopTimestamp : 1; unsigned char collectionType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMeta;
@property (retain, nonatomic) CLPMeta *meta;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) double startTimestamp;
@property (nonatomic) BOOL hasStopTimestamp;
@property (nonatomic) double stopTimestamp;
@property (nonatomic) BOOL hasCollectionType;
@property (nonatomic) int collectionType;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) CLPContext *context;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) CLPLocation *location;
@property (retain, nonatomic) NSMutableArray *pressures;
@property (retain, nonatomic) NSMutableArray *wifiScans;
@property (retain, nonatomic) NSMutableArray *locations;

+ (Class)locationsType;
+ (Class)pressureType;
+ (Class)wifiScanType;

- (unsigned long long)locationsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)addLocations:(id)a0;
- (unsigned long long)hash;
- (void)clearLocations;
- (id)dictionaryRepresentation;
- (id)locationsAtIndex:(unsigned long long)a0;
- (void)addPressure:(id)a0;
- (void)addWifiScan:(id)a0;
- (unsigned long long)pressuresCount;
- (void)clearPressures;
- (id)pressureAtIndex:(unsigned long long)a0;
- (unsigned long long)wifiScansCount;
- (void)clearWifiScans;
- (id)wifiScanAtIndex:(unsigned long long)a0;
- (id)collectionTypeAsString:(int)a0;
- (int)StringAsCollectionType:(id)a0;

@end
