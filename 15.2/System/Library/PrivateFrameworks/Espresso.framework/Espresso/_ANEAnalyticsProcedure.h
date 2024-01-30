@class NSArray, NSDictionary;

@interface _ANEAnalyticsProcedure : NSObject

@property (readonly, nonatomic) NSArray *groupInfo;
@property (readonly, nonatomic) NSDictionary *procedureMetrics;

+ (id)objectWithGroups:(id)a0 procedureMetrics:(id)a1;

- (id)serialize;
- (id)initWithGroups:(id)a0 procedureMetrics:(id)a1;
- (void).cxx_destruct;

@end
