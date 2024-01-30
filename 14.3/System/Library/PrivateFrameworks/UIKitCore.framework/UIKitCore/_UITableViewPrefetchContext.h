@class NSMutableIndexSet;

@interface _UITableViewPrefetchContext : NSObject

@property (retain, nonatomic) NSMutableIndexSet *outstandingRequests;
@property (nonatomic) long long maxIndex;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } lastVisibleIndexRange;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) long long prefetchItemCount;
@property (nonatomic) long long refreshPrefetchThresholdCount;
@property (nonatomic) long long cancelThresholdCount;
@property (nonatomic) BOOL prefetchScheduled;
@property (copy, nonatomic) id /* block */ requestHandler;
@property (copy, nonatomic) id /* block */ cancelHandler;

- (void)cancel;
- (void)updateVisibleIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withContentOffset:(double)a1;
- (id)computedPrefetchIndexSet;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_validatedRangeWithLocation:(long long)a0 length:(long long)a1;
- (void).cxx_destruct;
- (void)cancelWithNewMaxIndex:(long long)a0;
- (void)schedulePrefetchRequestAfterNextCACommit:(id)a0;
- (id)description;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_offsetAndValidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 firstIndexOffset:(long long)a1 lastIndexOffset:(long long)a2;
- (int)_effectiveRefreshDirectionForProposedVisibleIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withContentOffset:(double)a1;
- (id)initWithMaxIndex:(long long)a0 prefetchItemCount:(long long)a1 refreshPrefetchThresholdCount:(long long)a2 cancelThresholdCount:(long long)a3;

@end
