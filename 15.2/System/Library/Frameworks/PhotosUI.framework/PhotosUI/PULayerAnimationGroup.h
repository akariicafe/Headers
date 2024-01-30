@class CALayer;

@interface PULayerAnimationGroup : PUTimedAnimationGroup {
    BOOL _areTrackedAnimationsPaused;
}

@property (readonly, nonatomic) CALayer *referenceLayer;

- (void).cxx_destruct;
- (id)init;
- (double)currentTime;
- (id)initWithReferenceLayer:(id)a0;
- (void)updateAnimations;

@end
