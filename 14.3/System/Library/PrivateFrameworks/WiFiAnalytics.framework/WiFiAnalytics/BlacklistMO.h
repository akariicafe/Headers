@class NSSet, NSDate;

@interface BlacklistMO : NSManagedObject

@property (nonatomic) short reason;
@property (nonatomic) short subReason;
@property (copy, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSSet *bss;
@property (retain, nonatomic) NSSet *network;

+ (id)entityName;
+ (id)fetchRequest;

@end
