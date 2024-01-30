@class GEOMapItemStorage, NSString, NSData, NSNumber;

@interface MSCollectionPlaceItem : MSCollectionItem {
    void /* unknown type, empty encoding */ _customName;
    void /* unknown type, empty encoding */ _droppedPinCoordinate;
    void /* unknown type, empty encoding */ _droppedPinFloorOrdinal;
    void /* unknown type, empty encoding */ _latitude;
    void /* unknown type, empty encoding */ _longitude;
    void /* unknown type, empty encoding */ _muid;
    void /* unknown type, empty encoding */ _origin;
    void /* unknown type, empty encoding */ _mapItemStorage;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSString *customName;
@property (nonatomic, copy) NSData *droppedPinCoordinate;
@property (nonatomic) int droppedPinFloorOrdinal;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic) short origin;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;

+ (id)optionsWith:(id)a0;
+ (id)strippedMapItemWith:(id)a0;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 customName:(id)a1 droppedPinCoordinate:(id)a2 droppedPinFloorOrdinal:(int)a3 latitude:(id)a4 longitude:(id)a5 muid:(id)a6 origin:(short)a7;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;

@end
