@class NSMutableArray, TSCHMultiDataLayerAnimationInfo;

@interface TSCHMultiDataChartRepAnimationDictionaryEntry : NSObject {
    TSCHMultiDataLayerAnimationInfo *mAnimationInfo;
    NSMutableArray *mAnimations;
}

+ (id)entry;

- (id)init;
- (void).cxx_destruct;
- (id)animation;
- (void)addAnimation:(id)a0 animationInfo:(id)a1;

@end
