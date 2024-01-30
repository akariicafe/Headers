@class PARUsageEvent;

@interface PARCategory : NSManagedObject

@property (nonatomic) int clientIntVal;
@property (nonatomic) BOOL isGoTo;
@property (nonatomic) BOOL isPunchout;
@property (nonatomic) BOOL isTop;
@property (nonatomic) int resultTypeIntVal;
@property (retain, nonatomic) PARUsageEvent *usageEvent;

+ (id)fetchRequest;

@end
