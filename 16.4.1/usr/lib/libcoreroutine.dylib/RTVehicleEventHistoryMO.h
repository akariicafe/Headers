@class NSString, NSNumber, NSDate;

@interface RTVehicleEventHistoryMO : NSManagedObject

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *locDate;
@property (retain, nonatomic) NSNumber *locLatitude;
@property (retain, nonatomic) NSNumber *locLongitude;
@property (retain, nonatomic) NSNumber *locUncertainty;

+ (id)managedObjectWithVehicleEvent:(id)a0 inManagedObjectContext:(id)a1;

@end
