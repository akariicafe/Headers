@class NSUUID, NSSet, NSDate, NSNumber;

@interface RTFingerprintMO : NSManagedObject

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSNumber *settledState;
@property (copy, nonatomic) NSDate *start;
@property (retain, nonatomic) NSSet *wifiAccessPoints;

+ (id)fetchRequest;
+ (id)fetchLastByStartDateInManagedObjectContext:(id)a0 error:(id *)a1;
+ (id)managedObjectWithFingerprint:(id)a0 inManagedObjectContext:(id)a1;

@end
