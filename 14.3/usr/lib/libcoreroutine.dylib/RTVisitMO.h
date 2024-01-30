@class NSNumber, NSDate;

@interface RTVisitMO : NSManagedObject

@property (copy, nonatomic) NSNumber *confidence;
@property (copy, nonatomic) NSDate *detectionDate;
@property (copy, nonatomic) NSDate *entryDate;
@property (copy, nonatomic) NSDate *exitDate;
@property (copy, nonatomic) NSDate *locationDate;
@property (copy, nonatomic) NSNumber *locationLatitude;
@property (copy, nonatomic) NSNumber *locationLongitude;
@property (copy, nonatomic) NSNumber *locationReferenceFrame;
@property (copy, nonatomic) NSNumber *locationUncertainty;
@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSNumber *dataPointCount;

+ (id)fetchRequest;
+ (id)managedObjectWithVisit:(id)a0 inManagedObjectContext:(id)a1;

@end
