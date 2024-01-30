@class SBPIPContentViewLayoutSettings, SBPIPMorphAnimatorController, NSString, PGPictureInPictureController, NSMutableDictionary, SBPIPController;

@interface SBPIPMorphAnimatorDataSource : NSObject <SBViewMorphAnimatorDataSource> {
    NSMutableDictionary *_morphAnimatorToPegasusInitialFrame;
}

@property (retain, nonatomic) SBPIPController *pipController;
@property (retain, nonatomic) PGPictureInPictureController *pegasusController;
@property (weak, nonatomic) SBPIPMorphAnimatorController *morphAnimatorController;
@property (retain, nonatomic) SBPIPContentViewLayoutSettings *contentViewLayoutSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_appLayoutBoundingBoxForAnimator:(id)a0;
- (BOOL)_isChamoisWindowingUIEnabledForAnimator:(id)a0;
- (id)initWithMorphAnimatorController:(id)a0 pipController:(id)a1 pegasusController:(id)a2 contentViewLayoutSettings:(id)a3;
- (BOOL)shouldProvideSourceClippingFrameInFixedCoordinateSpace:(id)a0;
- (double)sourceBlackCurtainCornerRadiusForAnimator:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceContentContainerFrameForAnimator:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceContentFrameForAnimator:(id)a0;
- (double)sourceCornerRadiusForAnimator:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceSubviewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inScreenSpaceForAnimator:(id)a1;
- (double)targetFinalCornerRadiusForAnimator:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetFinalFrameForAnimator:(id)a0;

@end
