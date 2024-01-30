@class TSURetainedPointerKeyDictionary;

@interface TSCHMultiDataChartRepAnimationDictionary : NSObject {
    TSURetainedPointerKeyDictionary *mEntries;
}

+ (id)dictionary;

- (id)init;
- (void).cxx_destruct;
- (id)entryForLayer:(id)a0;
- (id)nonretainedValueForObject:(id)a0;
- (void)addAnimation:(id)a0 animationInfo:(id)a1 forLayer:(id)a2;
- (id)animationDictionaryForBuildEngine;
- (void)addEntriesFromAnimationDictionary:(id)a0 beginTime:(double)a1 duration:(double)a2 interpolations:(id)a3;

@end
