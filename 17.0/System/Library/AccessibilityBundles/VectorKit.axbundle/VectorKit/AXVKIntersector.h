@class AXVKMultiSectionFeatureWrapper;

@interface AXVKIntersector : NSObject

@property (retain, nonatomic) AXVKMultiSectionFeatureWrapper *featureWrapper;
@property (nonatomic) struct { double latitude; double longitude; } coordinates;
@property (nonatomic) BOOL isDeadEnd;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFeature:(id)a0 coordinates:(struct { double x0; double x1; })a1 isDeadEnd:(BOOL)a2;
- (id)initWithFeatureWrapper:(id)a0 coordinates:(struct { double x0; double x1; })a1 isDeadEnd:(BOOL)a2;

@end
