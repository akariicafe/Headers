@class NSString, NSUUID, NSData, NSDate, NSNumber, RTMapItemMO;

@interface RTVehicleEventMO : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSNumber *locLatitude;
@property (copy, nonatomic) NSNumber *locLongitude;
@property (copy, nonatomic) NSNumber *locUncertainty;
@property (copy, nonatomic) NSDate *locDate;
@property (copy, nonatomic) NSNumber *locReferenceFrame;
@property (copy, nonatomic) NSString *vehicleIdentifier;
@property (copy, nonatomic) NSNumber *userSetLocation;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *photoData;
@property (copy, nonatomic) NSNumber *locationQuality;
@property (copy, nonatomic) NSNumber *usualLocation;
@property (copy, nonatomic) NSUUID *mapItemIdentifier;
@property (retain, nonatomic) RTMapItemMO *cachedMapItem;

+ (id)managedObjectWithVehicleEvent:(id)a0 inManagedObjectContext:(id)a1;

- (void)setMapItem:(id)a0;
- (id)mapItem;
- (void).cxx_destruct;

@end
