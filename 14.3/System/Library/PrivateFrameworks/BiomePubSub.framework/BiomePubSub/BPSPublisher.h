@class NSString;

@interface BPSPublisher : NSObject <BPSPublisher>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribe:(id)a0;
- (id)reduce:(id)a0;
- (id)last;
- (id)collect;
- (id)mergeWithOther:(id)a0;
- (id)sinkWithCompletion:(id /* block */)a0 shouldContinue:(id /* block */)a1;
- (id)sinkWithCompletion:(id /* block */)a0 receiveInput:(id /* block */)a1;
- (id)filterWithIsIncluded:(id /* block */)a0;
- (id)orderedMergeWithOthers:(id)a0 comparator:(id /* block */)a1;
- (id)scanWithInitial:(id)a0 nextPartialResult:(id /* block */)a1;
- (id)mergeWithOthers:(id)a0;
- (id)combineLatestwithOther:(id)a0;
- (id)reduceWithInitial:(id)a0 nextPartialResult:(id /* block */)a1;
- (id)sequenceWithSequence:(id)a0;
- (id)mapWithTransform:(id /* block */)a0;
- (id)flatMapWithTransform:(id /* block */)a0;
- (id)zipWithOther:(id)a0;
- (id)zipWithOthers:(id)a0;
- (id)orderedMergeWithOther:(id)a0 comparator:(id /* block */)a1;
- (id)removeDuplicatesWithIsDuplicate:(id /* block */)a0;

@end
