@class NSDate;

@interface PAREvent : NSManagedObject

@property (copy, nonatomic) NSDate *timestamp;

+ (id)fetchRequest;

@end
