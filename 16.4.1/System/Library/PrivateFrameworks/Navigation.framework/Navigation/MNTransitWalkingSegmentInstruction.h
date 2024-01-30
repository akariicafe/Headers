@class GEOComposedWalkingRouteSegment;

@interface MNTransitWalkingSegmentInstruction : MNTransitInstruction

@property (readonly, nonatomic) GEOComposedWalkingRouteSegment *walkingSegment;

+ (id)instructionForWalkingSegment:(id)a0 context:(long long)a1;

- (void).cxx_destruct;
- (id)instructionSet;
- (id)initWithWalkingSegment:(id)a0 context:(long long)a1;
- (id)overridenInstructionsMapping;

@end
