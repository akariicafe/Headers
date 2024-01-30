@class NSString, NSSet, NSDate;

@interface CLSManagedQueryLocation : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityName;

@property (nonatomic) double updateTimestamp;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSSet *publicEvents;

@end
