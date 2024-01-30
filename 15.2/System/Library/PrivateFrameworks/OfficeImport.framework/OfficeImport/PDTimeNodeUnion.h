@class PDVideoNode, PDParallelTimeNode, PDSequentialTimeNode, PDCmdBehavior, PDSetBehavior, PDAnimateMotionBehavior, PDAnimateScaleBehavior, PDAnimateColorBehavior, PDAudioNode, PDAnimateRotateBehavior, PDAnimateEffectBehavior, PDAnimateTimeBehavior;

@interface PDTimeNodeUnion : NSObject {
    PDAnimateTimeBehavior *mTimeBehavior;
    PDAnimateEffectBehavior *mEffectBehavior;
    PDAnimateMotionBehavior *mMotionBehavior;
    PDAnimateRotateBehavior *mRotateBehavior;
    PDAnimateScaleBehavior *mScaleBehavior;
    PDAnimateColorBehavior *mColorBehavior;
    PDAudioNode *mAudio;
    PDVideoNode *mVideo;
    PDParallelTimeNode *mParallelTimeNodeGroup;
    PDSequentialTimeNode *mSequentialTimeNodeGroup;
    PDSetBehavior *mSetBehavior;
    PDCmdBehavior *mCmdBehavior;
}

- (id)video;
- (void)setBehavior:(id)a0;
- (id)audio;
- (id)description;
- (id)behavior;
- (void).cxx_destruct;
- (id)init;
- (void)setVideo:(id)a0;
- (void)setAudio:(id)a0;
- (void)setSequential:(id)a0;
- (void)setScaleBehavior:(id)a0;
- (id)scaleBehavior;
- (id)timeBehavior;
- (id)colorBehavior;
- (id)effectBehavior;
- (id)motionBehavior;
- (id)rotateBehavior;
- (id)cmdBehavior;
- (void)setParallel:(id)a0;
- (void)setTimeBehavior:(id)a0;
- (void)setColorBehavior:(id)a0;
- (void)setEffectBehavior:(id)a0;
- (void)setMotionBehavior:(id)a0;
- (void)setRotateBehavior:(id)a0;
- (void)setCmdBehavior:(id)a0;
- (id)commonBehavior;
- (id)parallel;
- (id)sequential;

@end
