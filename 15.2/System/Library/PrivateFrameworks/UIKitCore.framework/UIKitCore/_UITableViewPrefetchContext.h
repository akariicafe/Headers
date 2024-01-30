@class NSMutableIndexSet;

@interface _UITableViewPrefetchContext : NSObject {
    BOOL _prefetchScheduled;
    id /* block */ _requestHandler;
    id /* block */ _cancelHandler;
    id /* block */ _cellHandler;
    id /* block */ _cellPruningHandler;
    NSMutableIndexSet *_outstandingRequests;
    long long _maxIndex;
    double _lastContentOffset;
    long long _prefetchItemCount;
    long long _refreshPrefetchThresholdCount;
    long long _cancelThresholdCount;
    struct _NSRange { unsigned long long location; unsigned long long length; } _lastVisibleIndexRange;
}

- (id)description;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_validatedRangeWithLocation:(long long)a0 length:(long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_offsetAndValidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 firstIndexOffset:(long long)a1 lastIndexOffset:(long long)a2;
- (int)_effectiveRefreshDirectionForProposedVisibleIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withContentOffset:(double)a1;
- (id)computedPrefetchIndexSet;

@end
