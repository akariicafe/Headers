@class CNQueue;
@protocol CNEnumeratorRefillStrategy;

@interface CNChangeHistoryResultEnumerator : NSEnumerator

@property (readonly, copy, nonatomic) CNQueue *changes;
@property (readonly, nonatomic) CNQueue *batchFetchQueue;
@property (readonly, nonatomic) id<CNEnumeratorRefillStrategy> refillStrategy;

+ (id)groupEnumeratorWithChanges:(id)a0 contactStore:(id)a1;
+ (id)contactEnumeratorWithChanges:(id)a0 keysToFetch:(id)a1 unifyResults:(BOOL)a2 contactStore:(id)a3;

- (id)nextObject;
- (id)initWithChanges:(id)a0 refillStrategy:(id)a1;
- (void)_fetchNextBatch;
- (void).cxx_destruct;

@end
