@class NSNumber, NSUUID, GEOMapItemStorage;

@interface MSHistoryPlaceItem : MSHistoryItem {
    void /* unknown type, empty encoding */ _latitude;
    void /* unknown type, empty encoding */ _longitude;
    void /* unknown type, empty encoding */ _muid;
    void /* unknown type, empty encoding */ _supersededSearchId;
    void /* unknown type, empty encoding */ _mapItemStorage;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, copy) NSUUID *supersededSearchId;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;

+ (id)strippedMapItemWith:(id)a0;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 latitude:(id)a1 longitude:(id)a2 muid:(id)a3 supersededSearchId:(id)a4;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;

@end
