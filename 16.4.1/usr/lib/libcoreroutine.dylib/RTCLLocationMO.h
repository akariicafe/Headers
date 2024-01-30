@class NSNumber, NSDate;

@interface RTCLLocationMO : NSManagedObject

@property (nonatomic) double altitude;
@property (nonatomic) double course;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double speed;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSNumber *type;
@property (nonatomic) double verticalAccuracy;
@property (retain, nonatomic) NSNumber *signalEnvironmentType;

+ (id)fetchRequest;
+ (id)managedObjectWithLatitude:(double)a0 longitude:(double)a1 altitude:(double)a2 horizontalAccuracy:(double)a3 verticalAccuracy:(double)a4 course:(double)a5 speed:(double)a6 timestamp:(id)a7 type:(id)a8 signalEnvironmentType:(id)a9 inManagedObjectContext:(id)a10;

@end
