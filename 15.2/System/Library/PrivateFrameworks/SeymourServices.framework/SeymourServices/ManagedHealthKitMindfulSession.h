@class NSString, ManagedHealthKitStandaloneMindfulSessionJob, NSDate;

@interface ManagedHealthKitMindfulSession : NSManagedObject

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic) double heartRate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, retain) ManagedHealthKitStandaloneMindfulSessionJob *standaloneMindfulSessionJob;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
