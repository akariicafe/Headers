@class NSString, NSDate;

@interface RemovedUser : NSManagedObject

@property (copy, nonatomic) NSDate *dateRemoved;
@property (copy, nonatomic) NSString *removedHandle;
@property (copy, nonatomic) NSString *statusTypeIdentifier;

+ (id)fetchRequest;
+ (id)predicateForStatusTypeIdentifier:(id)a0;
+ (id)predicateForHandle:(id)a0;
+ (id)dateRemovedKeyPath;
+ (id)handleKeyPath;
+ (id)statusTypeIdentifierKeyPath;
+ (id)predicateForHandleString:(id)a0;

@end
