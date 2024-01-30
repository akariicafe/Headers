@class NSArray;

@interface BMDSL : BMDSLBaseCodable <BMDSL>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *upstreams;


- (id)bpsPublisher;
- (id)combinedState;
- (void)allowEvaluation;
- (id)collect;
- (id)subscribeOn:(id)a0;
- (id)mergeWithOther:(id)a0;
- (id)mapWithTransform:(id)a0;
- (id)as:(id)a0;
- (id)insertState:(id)a0 as:(id)a1;
- (id)filterWithKeyPath:(id)a0 comparison:(long long)a1 negation:(BOOL)a2 value:(id)a3;
- (id)filterWithKeyPath:(id)a0 comparison:(long long)a1 value:(id)a2;
- (id)filterWithKeyPath:(id)a0 value:(id)a1;
- (id)mapWithSelector:(SEL)a0;
- (id)mapWithTransform:(id)a0 keyPaths:(id)a1;
- (id)orderedMergeWithOther:(id)a0 key:(id)a1 selector:(SEL)a2;
- (id)subscribeOn:(id)a0 with:(id)a1;
- (id)windowByKeyedPath:(id)a0 assigner:(id)a1;

@end
