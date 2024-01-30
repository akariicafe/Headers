@class NSDictionary, NSMutableDictionary;

@interface PXStoryPPTResultsAggregate : NSObject {
    NSMutableDictionary *_measureInfos;
    NSMutableDictionary *_extraResultsDictionaryRepresentation;
}

@property (readonly, nonatomic) NSDictionary *extraResultsDictionaryRepresentation;

- (id)init;
- (void).cxx_destruct;
- (void)_addExtraResultsValue:(double)a0 metric:(long long)a1 forMeasure:(id)a2 configuration:(id)a3;
- (id)_keyForMeasure:(id)a0 configuration:(id)a1;
- (void)addValue:(double)a0 metric:(long long)a1 forMeasure:(id)a2 configuration:(id)a3;

@end
