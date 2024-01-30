@class NSDictionary;

@interface HFItemResultComponent : NSObject

@property (readonly, copy, nonatomic) NSDictionary *results;
@property (readonly, nonatomic) long long componentPriority;

+ (id)combinedResultsForComponents:(id)a0;

@end
