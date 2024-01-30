@class CLPMeta, NSMutableArray;

@interface CLPIndoorCollectionRequest : PBRequest <NSCopying>

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *indoorWifis;
@property (retain, nonatomic) NSMutableArray *indoorLocations;
@property (retain, nonatomic) NSMutableArray *indoorCMAttitudes;
@property (retain, nonatomic) NSMutableArray *indoorCMPedometers;
@property (retain, nonatomic) NSMutableArray *indoorMotionActivitys;
@property (retain, nonatomic) NSMutableArray *indoorPressures;
@property (retain, nonatomic) NSMutableArray *bundleIds;

+ (Class)indoorWifisType;
+ (Class)indoorLocationsType;
+ (Class)indoorCMAttitudeType;
+ (Class)indoorCMPedometerType;
+ (Class)indoorMotionActivityType;
+ (Class)indoorPressureType;
+ (Class)bundleIdType;

- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)clearBundleIds;
- (unsigned long long)bundleIdsCount;
- (void)addIndoorWifis:(id)a0;
- (void)addIndoorLocations:(id)a0;
- (void)addIndoorCMAttitude:(id)a0;
- (void)addIndoorCMPedometer:(id)a0;
- (void)addIndoorMotionActivity:(id)a0;
- (void)addIndoorPressure:(id)a0;
- (void)addBundleId:(id)a0;
- (unsigned long long)indoorWifisCount;
- (void)clearIndoorWifis;
- (id)indoorWifisAtIndex:(unsigned long long)a0;
- (unsigned long long)indoorLocationsCount;
- (void)clearIndoorLocations;
- (id)indoorLocationsAtIndex:(unsigned long long)a0;
- (unsigned long long)indoorCMAttitudesCount;
- (void)clearIndoorCMAttitudes;
- (id)indoorCMAttitudeAtIndex:(unsigned long long)a0;
- (unsigned long long)indoorCMPedometersCount;
- (void)clearIndoorCMPedometers;
- (id)indoorCMPedometerAtIndex:(unsigned long long)a0;
- (unsigned long long)indoorMotionActivitysCount;
- (void)clearIndoorMotionActivitys;
- (id)indoorMotionActivityAtIndex:(unsigned long long)a0;
- (unsigned long long)indoorPressuresCount;
- (void)clearIndoorPressures;
- (id)indoorPressureAtIndex:(unsigned long long)a0;
- (id)bundleIdAtIndex:(unsigned long long)a0;

@end
