@class NSArray, NSString;

@interface BMBookmarkablePublisher : BPSPublisher <BMBookmarkablePublisher>

@property (readonly, nonatomic) NSArray *bookmarkableUpstreams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStoreInternalStateInBookmark;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)collect;
- (id)withBookmark:(id)a0;
- (id)reduce:(id)a0;
- (void)subscribe:(id)a0;
- (id)orderedMergeWithOthers:(id)a0 comparator:(id /* block */)a1;
- (id)mapWithTransform:(id /* block */)a0;
- (id)orderedMergeWithOther:(id)a0 comparator:(id /* block */)a1;
- (id)last;
- (id)correlateWithCurrent:(id)a0 comparator:(id /* block */)a1 correlateHandler:(id)a2;
- (id)flatMapWithTransform:(id /* block */)a0;
- (id)scanWithInitial:(id)a0 nextPartialResult:(id /* block */)a1;
- (id)filterWithIsIncluded:(id /* block */)a0;
- (id)bufferWithSize:(unsigned long long)a0 prefetch:(unsigned long long)a1 whenFull:(unsigned long long)a2;
- (id)mergeWithOther:(id)a0;
- (id)reduceWithInitial:(id)a0 nextPartialResult:(id /* block */)a1;
- (id)multicastCreateSubject:(id /* block */)a0;
- (id)mergeWithOthers:(id)a0;
- (id)multicastSubject:(id)a0;
- (id)groupByKey:(id /* block */)a0;

@end
