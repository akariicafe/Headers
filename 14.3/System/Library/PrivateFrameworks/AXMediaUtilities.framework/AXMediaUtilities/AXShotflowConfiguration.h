@class NSArray, NSNumber;

@interface AXShotflowConfiguration : NSObject

@property (readonly, nonatomic) NSArray *filterThresholds;
@property (readonly, nonatomic) NSNumber *networkThreshold;
@property (readonly, nonatomic) NSNumber *nmsThreshold;
@property (readonly, nonatomic) NSArray *defaultBoxesSidesNormalized;
@property (readonly, nonatomic) NSArray *ratios;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)description;

@end
