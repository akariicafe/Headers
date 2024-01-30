@class NSString;

@interface SBHPageManagementIconViewScalingAttributes : NSObject

@property (readonly, copy, nonatomic) NSString *minificationFilter;
@property (readonly, nonatomic) BOOL shouldRasterize;
@property (readonly, nonatomic) double rasterizationScale;
@property (readonly, nonatomic) BOOL allowsEdgeAntialiasing;

- (void).cxx_destruct;
- (id)initWithMinificationFilter:(id)a0 shouldRasterize:(BOOL)a1 rasterizationScale:(double)a2 allowsEdgeAntialiasing:(BOOL)a3;

@end
