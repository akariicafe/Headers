@class NSUUID, NSDate;

@interface RTProximityEventMO : NSManagedObject

@property (copy, nonatomic) NSUUID *eventID;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long proximity;
@property (nonatomic) long long relationship;

+ (id)fetchRequest;
+ (id)managedObjectWithEventID:(id)a0 startDate:(id)a1 endDate:(id)a2 relationship:(long long)a3 proximity:(long long)a4 inManagedObjectContext:(id)a5;
+ (id)managedObjectWithProximityEvent:(id)a0 inManagedObjectContext:(id)a1;

@end
