@class NSArray, NSString;

@interface WBSHistoryServiceURLCompletionMatchData : NSObject <WBSURLCompletionMatchData> {
    struct unique_ptr<SafariShared::_HistoryStreamedMatchData, std::__1::default_delete<SafariShared::_HistoryStreamedMatchData> > { struct __compressed_pair<SafariShared::_HistoryStreamedMatchData *, std::__1::default_delete<SafariShared::_HistoryStreamedMatchData> > { struct _HistoryStreamedMatchData *__value_; } __ptr_; } _streamData;
    NSArray *_autocompleteTriggersAsStringArray;
}

@property (copy, nonatomic) NSArray *entries;
@property (nonatomic) double lastVisitedTimeInterval;
@property (readonly, nonatomic) BOOL lastVisitWasFailure;
@property (nonatomic) long long visitCount;
@property (readonly, nonatomic) struct _HistoryStreamedMatchData { struct { unsigned int x0; unsigned int x1; } x0; double x1; void *x2; long long x3; int x4; unsigned char x5; unsigned char x6; } *streamData;
@property (readonly, nonatomic) NSString *originalURLString;
@property (readonly, nonatomic) BOOL containsBookmark;
@property (readonly, nonatomic) BOOL shouldPreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStreamData:(struct unique_ptr<SafariShared::_HistoryStreamedMatchData, std::__1::default_delete<SafariShared::_HistoryStreamedMatchData> > { struct __compressed_pair<SafariShared::_HistoryStreamedMatchData *, std::__1::default_delete<SafariShared::_HistoryStreamedMatchData> > { struct _HistoryStreamedMatchData *x0; } x0; } *)a0 entries:(id)a1;
- (id)pageTitleAtIndex:(unsigned long long)a0;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)a0;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)a0;
- (id)userVisibleURLStringAtIndex:(unsigned long long)a0;
- (void)enumeratePageTitlesUsingBlock:(id /* block */)a0;
- (void)enumerateUserVisibleURLsUsingBlock:(id /* block */)a0;
- (float)topSitesScoreForPageTitleAtTime:(double)a0;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)a0 atTime:(double)a1;
- (id)matchDataByMergingWithMatchData:(id)a0;
- (BOOL)matchesAutocompleteTrigger:(id)a0;
- (id).cxx_construct;
- (void)setAutocompleteTriggers:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithLastVisitWasFailure:(BOOL)a0 visitWasFromThisDevice:(BOOL)a1;

@end
