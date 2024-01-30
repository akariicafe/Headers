@class NSDate;

@interface PAREvent : NSManagedObject

@property (nonatomic, copy) NSDate *timestamp;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void).cxx_destruct;
- (void).cxx_construct;

@end
