@class NSArray;

@interface _UIStatusBarDisplayItemPlacementGroup : NSObject

@property (copy, nonatomic) NSArray *placements;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) long long minimumPriority;
@property (readonly, nonatomic) long long maximumPriority;

+ (id)groupWithPriority:(long long)a0 placements:(id)a1;

- (void).cxx_destruct;

@end
