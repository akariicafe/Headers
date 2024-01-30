@class NSNumber, NSDate;

@interface RTSettledStateTransitionMO : NSManagedObject

@property (copy, nonatomic) NSNumber *transitionFromType;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSNumber *transitionToType;

+ (id)fetchRequest;
+ (id)managedObjectWithSettledStateTransition:(id)a0 inManagedObjectContext:(id)a1;

@end
