@class CALayer;

@interface PULayerAnimationGroup : PUTimedAnimationGroup {
    BOOL _areTrackedAnimationsPaused;
}

@property (readonly, nonatomic) CALayer *referenceLayer;

- (id)init;
- (void).cxx_destruct;
- (id)initWithReferenceLayer:(id)a0;
- (double)currentTime;
- (void)updateAnimations;

@end
