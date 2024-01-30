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

- (void)removeAllAnimations;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_allowFacesToAdjoinToAdjacentFaces;
- (id)_animationsForEnd;
- (id)_animationsForStart;
- (void)_updateTransition;
- (void)commitTransitionRebuild;
- (id)geometriesForKeyplane:(id)a0;
- (id)meshTransformForKeyplane:(id)a0 toKeyplane:(id)a1;
- (void)rebuildWithStartKeyplane:(id)a0 startView:(id)a1 endKeyplane:(id)a2 endView:(id)a3;
- (id)sortedCommonVisibleKeys;
- (id)symmetricMeshTransformForKeyplane:(id)a0;
- (void)updateOpacityAnimation:(id)a0;
- (void)updateWithProgress:(double)a0;

@end
