@class NSMutableArray, TSCHMultiDataLayerAnimationInfo;

@interface TSCHMultiDataChartRepAnimationDictionaryEntry : NSObject {
    TSCHMultiDataLayerAnimationInfo *_animationInfo;
    NSMutableArray *_animations;
}

+ (id)entry;

- (id)animation;
- (id)init;
- (void).cxx_destruct;
- (void)addAnimation:(id)a0 animationInfo:(id)a1;

@end
