@class NSString;

@interface SBPIPMorphAnimatorDataSource : NSObject <SBViewMorphAnimatorDataSource>

@property (readonly, nonatomic) int targetProcessIdentifier;
@property (readonly, nonatomic) NSString *scenePersistenceIdentifier;
@property (readonly, nonatomic, getter=isGestureInitiated) BOOL gestureInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceContentFrameForAnimator:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetFinalFrameForAnimator:(id)a0;
- (double)sourceCornerRadiusForAnimator:(id)a0;
- (double)targetFinalCornerRadiusForAnimator:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceAppLayoutFrameForAnimator:(id)a0;
- (id)initWithTargetProcessIdentifier:(int)a0 scenePersistenceIdentifier:(id)a1 gestureInitiated:(BOOL)a2;

@end
