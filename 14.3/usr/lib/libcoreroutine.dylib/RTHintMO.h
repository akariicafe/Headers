@class NSDate;

@interface RTHintMO : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) long long source;

+ (id)fetchRequest;
+ (id)managedObjectWithLatitude:(double)a0 longitude:(double)a1 source:(long long)a2 date:(id)a3 inManagedObjectContext:(id)a4;
+ (id)managedObjectWithHint:(id)a0 inManagedObjectContext:(id)a1;

@end
