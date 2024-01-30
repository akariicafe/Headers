@class NSArray, CADisplayLink;

@interface UIKeyboardSquishTransition : UIKeyboardKeyplaneTransition {
    double _widthRatio;
    double _offsetX;
}

@property (retain, nonatomic) NSArray *startGeometries;
@property (retain, nonatomic) NSArray *endGeometries;
@property (retain, nonatomic) NSArray *commonVisibleKeys;
@property (retain, nonatomic) CADisplayLink *opacityAnimationDisplayLink;
@property (nonatomic) double opacityAnimationBeginTime;
@property (nonatomic) BOOL opacityAnimationDirectionForward;
@property (nonatomic) double previousProgress;
@property (nonatomic) BOOL useInteractiveOpacity;
@property (nonatomic) unsigned long long animationType;
@property (nonatomic) BOOL disableMeshOptimization;

- (void)dealloc;
- (void)removeAllAnimations;
- (void)commitTransitionRebuild;
- (id)sortedCommonVisibleKeys;
- (void)_updateTransition;
- (id)meshTransformForKeyplane:(id)a0 toKeyplane:(id)a1;
- (id)_animationsForStart;
- (id)_animationsForEnd;
- (void)updateOpacityAnimation:(id)a0;
- (id)geometriesForKeyplane:(id)a0;
- (BOOL)_allowFacesToAdjoinToAdjacentFaces;
- (id)symmetricMeshTransformForKeyplane:(id)a0;
- (void)rebuildWithStartKeyplane:(id)a0 startView:(id)a1 endKeyplane:(id)a2 endView:(id)a3;
- (void)updateWithProgress:(double)a0;

@end
