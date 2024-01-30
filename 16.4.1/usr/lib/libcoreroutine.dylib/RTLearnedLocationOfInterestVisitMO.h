@class RTLearnedLocationOfInterestMO, NSUUID, NSDate, NSNumber;

@interface RTLearnedLocationOfInterestVisitMO : NSManagedObject

@property (copy, nonatomic) NSNumber *confidence;
@property (copy, nonatomic) NSNumber *dataPointCount;
@property (copy, nonatomic) NSDate *entryDate;
@property (copy, nonatomic) NSDate *exitDate;
@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSNumber *locationLatitude;
@property (copy, nonatomic) NSNumber *locationLongitude;
@property (copy, nonatomic) NSNumber *locationReferenceFrame;
@property (copy, nonatomic) NSNumber *locationHorizontalUncertainty;
@property (copy, nonatomic) NSNumber *locationAltitude;
@property (copy, nonatomic) NSNumber *locationVerticalUncertainty;
@property (copy, nonatomic) NSNumber *locationSourceAccuracy;
@property (retain, nonatomic) RTLearnedLocationOfInterestMO *locationOfInterest;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSNumber *locationOfInterestConfidence;
@property (copy, nonatomic) NSNumber *locationOfInterestSource;

+ (id)fetchRequest;
+ (id)managedObjectWithVisit:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;
+ (id)managedObjectWithVisit:(id)a0 inManagedObjectContext:(id)a1;

@end
