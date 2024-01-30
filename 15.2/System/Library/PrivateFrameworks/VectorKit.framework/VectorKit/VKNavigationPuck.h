@class NSString, VKTimedAnimation;
@protocol VKAnnotation;

@interface VKNavigationPuck : NSObject <VKTrackableAnnotationPresentation> {
    VKTimedAnimation *_puckStyleAnimation;
    struct AnimationRunner { struct MapEngine *x0; } *_animationRunner;
    void *_navigationPuck;
}

@property (retain, nonatomic) id<VKAnnotation> annotation;
@property (nonatomic) struct { double x0; double x1; } presentationCoordinate;
@property (nonatomic) double presentationCourse;
@property (nonatomic) int mode;
@property (nonatomic) BOOL tracking;
@property (nonatomic) BOOL animatingToCoordinate;
@property (nonatomic) BOOL showCourse;
@property (nonatomic) BOOL stale;
@property (nonatomic) float scale;
@property (nonatomic) BOOL enabled;
@property (nonatomic, getter=isAnimatingAccuracy) BOOL animatingAccuracy;
@property (nonatomic) double presentationAccuracy;
@property (readonly, nonatomic) double minimumAccuracy;
@property (readonly, nonatomic) struct VKEdgeInsets { float x0; float x1; float x2; float x3; } annotationTrackingEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnimationRunner:(struct AnimationRunner { struct MapEngine *x0; } *)a0;
- (void *)puck;
- (void)destroyAnimationRunner;
- (void)dealloc;
- (void)runAnimation:(id)a0;

@end
