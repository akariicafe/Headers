@class NSArray;

@interface ATXModeEntityAffinityVector : NSObject

@property (readonly, nonatomic) NSArray *affinityVector;

+ (id)weightedCentroid:(id)a0;
+ (id)centroid:(id)a0;

- (double)magnitude;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)prettyDescription;
- (id)sortedAffinities;
- (BOOL)isZeroVector;
- (double)scoreForMode:(unsigned long long)a0;
- (id)initWithAffinities:(id)a0 shouldResize:(BOOL)a1;
- (id)initWithAffinities:(id)a0;
- (void)resizeToUnit;
- (id)_initWithAffinityVector:(id)a0;

@end
