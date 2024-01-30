@class NSMutableSet;

@interface PXCuratedLibraryAnimationTracker : NSObject

@property (class, readonly, nonatomic) PXCuratedLibraryAnimationTracker *sharedTracker;

@property (readonly, nonatomic) NSMutableSet *inFlightAnimations;

+ (void)_scrollAnimationOccurredWithContext:(struct { long long x0; long long x1; })a0 isBegin:(BOOL)a1;
+ (void)scrollAnimationDidBeginWithScrollContext:(struct { long long x0; long long x1; })a0;
+ (void)scrollAnimationDidEndWithScrollContext:(struct { long long x0; long long x1; })a0;

- (void)zoomLevelTransitionPreparationDidBegin:(id)a0;
- (void)_zoomLevelTransitionOccurred:(id)a0 isPreparation:(BOOL)a1 isBegin:(BOOL)a2;
- (void)zoomLevelTransitionDidBegin:(id)a0;
- (void)zoomLevelTransitionDidEnd:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)zoomLevelTransitionsDidEndEarly;

@end
