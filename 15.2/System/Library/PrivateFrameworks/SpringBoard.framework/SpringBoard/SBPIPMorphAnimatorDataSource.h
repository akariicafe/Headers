@class SBPIPContentViewLayoutSettings, NSString, PGPictureInPictureController, SBPIPController;

@interface SBPIPMorphAnimatorDataSource : NSObject <SBViewMorphAnimatorDataSource>

@property (retain, nonatomic) SBPIPController *pipController;
@property (retain, nonatomic) PGPictureInPictureController *pegasusController;
@property (nonatomic) int targetProcessIdentifier;
@property (retain, nonatomic) NSString *scenePersistenceIdentifier;
@property (readonly, nonatomic, getter=isGestureInitiated) BOOL gestureInitiated;
@property (retain, nonatomic) SBPIPContentViewLayoutSettings *contentViewLayoutSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTargetProcessIdentifier:(int)a0 scenePersistenceIdentifier:(id)a1 gestureInitiated:(BOOL)a2 pipController:(id)a3 pegasusController:(id)a4 contentViewLayoutSettings:(id)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceAppLayoutFrameForAnimator:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceContentFrameForAnimator:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetFinalFrameForAnimator:(id)a0;
- (double)sourceCornerRadiusForAnimator:(id)a0;
- (double)sourceBlackCurtainCornerRadiusForAnimator:(id)a0;
- (double)targetFinalCornerRadiusForAnimator:(id)a0;

@end
