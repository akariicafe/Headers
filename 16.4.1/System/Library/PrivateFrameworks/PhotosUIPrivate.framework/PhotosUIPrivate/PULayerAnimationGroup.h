@class CALayer;

@interface PULayerAnimationGroup : PUTimedAnimationGroup {
    BOOL _areTrackedAnimationsPaused;
}

@property (readonly, nonatomic) CALayer *referenceLayer;

- (void)updateAnimations;
- (double)currentTime;
- (id)init;
- (id)initWithReferenceLayer:(id)a0;
- (void).cxx_destruct;

@end
