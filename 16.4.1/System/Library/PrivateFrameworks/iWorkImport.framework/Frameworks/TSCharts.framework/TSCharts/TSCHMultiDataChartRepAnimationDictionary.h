@class NSDictionary, TSURetainedPointerKeyDictionary;

@interface TSCHMultiDataChartRepAnimationDictionary : NSObject {
    TSURetainedPointerKeyDictionary *_entries;
}

@property (readonly, nonatomic) NSDictionary *animationDictionaryForBuildEngine;

+ (id)dictionary;

- (id)init;
- (void).cxx_destruct;
- (void)addAnimation:(id)a0 animationInfo:(id)a1 forLayer:(id)a2;
- (void)addEntriesFromAnimationDictionary:(id)a0 beginTime:(double)a1 duration:(double)a2 interpolations:(id)a3;
- (id)entryForLayer:(id)a0;
- (id)nonretainedValueForObject:(id)a0;

@end
