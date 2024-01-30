@class GEOMapItemStorage, NSString, GEOLatLng, NSNumber;

@interface MapsSync.MapsSyncCollectionPlaceItem : MapsSync.MapsSyncCollectionItem {
    void /* unknown type, empty encoding */ _customName;
    void /* unknown type, empty encoding */ _droppedPinCoordinate;
    void /* unknown type, empty encoding */ _droppedPinFloorOrdinal;
    void /* unknown type, empty encoding */ _mapItemStorage;
    void /* unknown type, empty encoding */ _origin;
    void /* unknown type, empty encoding */ _latitude;
    void /* unknown type, empty encoding */ _longitude;
    void /* unknown type, empty encoding */ _muid;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *customName;
@property (nonatomic, readonly) GEOLatLng *droppedPinCoordinate;
@property (nonatomic, readonly) int droppedPinFloorOrdinal;
@property (nonatomic, readonly) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, readonly) short origin;
@property (nonatomic, readonly) NSNumber *latitude;
@property (nonatomic, readonly) NSNumber *longitude;
@property (nonatomic, readonly) NSNumber *muid;

+ (void)fetchNearbyPlacesWithLatitude:(double)a0 longitude:(double)a1 callbackQueue:(id)a2 completion:(id /* block */)a3;

- (void)addEditWithBlock:(id /* block */)a0;
- (void)setPropertiesWithObject:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCollection:(id)a0;
- (id)copyWithZone:(void *)a0;
- (Class)mutableObjectClass;
- (Class)managedObjectClass;
- (BOOL)isDuplicateOfOther:(id)a0;

@end
