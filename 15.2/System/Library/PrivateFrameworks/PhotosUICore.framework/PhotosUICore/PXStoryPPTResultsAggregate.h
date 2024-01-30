@class NSDictionary, NSMutableDictionary;

@interface PXStoryPPTResultsAggregate : NSObject {
    NSMutableDictionary *_measureInfos;
    NSMutableDictionary *_extraResultsDictionaryRepresentation;
}

@property (readonly, nonatomic) NSDictionary *extraResultsDictionaryRepresentation;

- (void).cxx_destruct;
- (id)init;
- (void)addValue:(double)a0 metric:(long long)a1 forMeasure:(id)a2 configuration:(id)a3;
- (void)_addExtraResultsValue:(double)a0 metric:(long long)a1 forMeasure:(id)a2 configuration:(id)a3;
- (id)_keyForMeasure:(id)a0 configuration:(id)a1;

@end
