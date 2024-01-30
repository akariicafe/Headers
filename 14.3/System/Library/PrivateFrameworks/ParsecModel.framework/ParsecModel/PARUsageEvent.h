@class PARCategory;

@interface PARUsageEvent : PAREvent

@property (retain, nonatomic) PARCategory *usageCategory;

+ (id)fetchRequest;

- (void).cxx_destruct;

@end
