@class PIReframeSubject, NSMutableSet, NSSet;

@interface PISubjectCluster : NSObject

@property (readonly, copy, nonatomic) NSMutableSet *mutablePoints;
@property (readonly, nonatomic) float saliencyScale;
@property (readonly, nonatomic, getter=isSalientObject) BOOL salientObject;
@property (readonly, nonatomic) PIReframeSubject *body;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } centerPoint;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;
@property (readonly, copy, nonatomic) NSSet *points;
@property (readonly, nonatomic) PIReframeSubject *expandedSubject;

+ (id)subjectForExpansionWithSaliencyScale:(float)a0 startingSubject:(id)a1;
+ (unsigned long long)directionForBody:(id)a0 face:(id)a1;

- (void).cxx_destruct;
- (void)addPoint:(id)a0;
- (id)description;
- (id)initWithBody:(id)a0 face:(id)a1 saliencyScale:(float)a2;
- (id)initSalientClusterWithCenterPoint:(struct CGPoint { double x0; double x1; })a0 saliencyScale:(float)a1;
- (id)initWithBody:(id)a0 direction:(unsigned long long)a1 saliencyScale:(float)a2;
- (BOOL)shouldAllowPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)addPointsFromCluster:(id)a0;

@end
