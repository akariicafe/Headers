@class NSString, NSUUID, NSDate, NSObject;

@interface Waypoint : NSManagedObject

@property (nonatomic) double altitude;
@property (nonatomic) BOOL altitudePopulated;
@property (retain, nonatomic) NSObject *coreLocation;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSObject *labelColor;
@property (copy, nonatomic) NSString *symbol;
@property (copy, nonatomic) NSDate *timeOfCreation;
@property (copy, nonatomic) NSUUID *uuid;
@property (nonatomic) short type;

+ (id)fetchRequest;

@end
