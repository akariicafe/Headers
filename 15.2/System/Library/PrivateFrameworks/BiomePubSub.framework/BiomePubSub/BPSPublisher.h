@class NSString;

@interface BPSPublisher : NSObject <BPSPublisher>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collect;
- (id)reduce:(id)a0;
- (void)subscribe:(id)a0;
- (id)orderedMergeWithOthers:(id)a0 comparator:(id /* block */)a1;
- (id)mapWithTransform:(id /* block */)a0;
- (id)orderedMergeWithOther:(id)a0 comparator:(id /* block */)a1;
- (id)sinkWithCompletion:(id /* block */)a0 receiveInput:(id /* block */)a1;
- (id)last;
- (id)sinkWithBookmark:(id)a0 completion:(id /* block */)a1 receiveInput:(id /* block */)a2;
- (id)correlateWithCurrent:(id)a0 comparator:(id /* block */)a1 correlateHandler:(id)a2;
- (id)flatMapWithTransform:(id /* block */)a0;
- (id)scanWithInitial:(id)a0 nextPartialResult:(id /* block */)a1;
- (id)filterWithIsIncluded:(id /* block */)a0;
- (id)drivableSinkWithBookmark:(id)a0 completion:(id /* block */)a1 shouldContinue:(id /* block */)a2;
- (id)bufferWithSize:(unsigned long long)a0 prefetch:(unsigned long long)a1 whenFull:(unsigned long long)a2;
- (id)sinkWithCompletion:(id /* block */)a0 shouldContinue:(id /* block */)a1;
- (id)mergeWithOther:(id)a0;
- (id)reduceWithInitial:(id)a0 nextPartialResult:(id /* block */)a1;
- (id)multicastCreateSubject:(id /* block */)a0;
- (id)mergeWithOthers:(id)a0;
- (id)multicastSubject:(id)a0;
- (id)connectableSinkWithCompletion:(id /* block */)a0 shouldContinue:(id /* block */)a1;
- (id)combineLatestwithOther:(id)a0;
- (id)debounceFor:(double)a0 getTimestamp:(id /* block */)a1;
- (id)throttleFor:(double)a0 latest:(BOOL)a1 getTimestamp:(id /* block */)a2;
- (id)timerFor:(double)a0 getTimestamp:(id /* block */)a1;
- (id)sequenceWithSequence:(id)a0;
- (id)zipWithOther:(id)a0;
- (id)zipWithOthers:(id)a0;
- (id)removeDuplicatesWithIsDuplicate:(id /* block */)a0;
- (id)windowByKey:(id /* block */)a0 assigner:(id)a1;
- (id)windowWithAssigner:(id)a0;
- (id)handleEventsReceiveSubscription:(id /* block */)a0 receiveOutput:(id /* block */)a1 receiveCompletion:(id /* block */)a2 receiveCancel:(id /* block */)a3 receiveRequest:(id /* block */)a4;
- (id)groupByKey:(id /* block */)a0;

@end
