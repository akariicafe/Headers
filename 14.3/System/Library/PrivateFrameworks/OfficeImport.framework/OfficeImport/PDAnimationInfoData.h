@class PDBuild, PDSequentialTimeNode, OADDrawable;

@interface PDAnimationInfoData : NSObject {
    unsigned int mOrder;
    PDBuild *mBuild;
    PDSequentialTimeNode *mSequentialTimeNodeData;
    OADDrawable *mDrawable;
}

- (id)build;
- (void).cxx_destruct;
- (id)data;
- (id)drawable;
- (unsigned int)order;
- (id)initWithTarget:(id)a0 presetClass:(int)a1 presetId:(int)a2 triggerType:(int)a3 iterateType:(int)a4 delay:(double)a5 direction:(double)a6 order:(unsigned int)a7 groupId:(id)a8 build:(id)a9;

@end
