@class NSString;

@interface WBSHistoryURLCompletionMatchData : NSObject <WBSURLCompletionMatchData> {
    struct RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > { struct HistoryURLCompletionItem *m_ptr; } _item;
}

@property (readonly, nonatomic) NSString *originalURLString;
@property (readonly, nonatomic) BOOL containsBookmark;
@property (readonly, nonatomic) double lastVisitedTimeInterval;
@property (readonly, nonatomic) BOOL lastVisitWasFailure;
@property (readonly, nonatomic) BOOL shouldPreload;
@property (readonly, nonatomic) long long visitCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
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
- (id)initWithCompletionItem:(struct HistoryURLCompletionItem { struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x0; long long x1; long long x2; long long x3; struct vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > > { struct RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > *x0; struct RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > *x1; struct __compressed_pair<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > *, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > > { struct RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > *x0; } x2; } x4; struct HistoryURLCompletionItem *x5; id x6; id x7; double x8; int x9; struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } x10; struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } x11; id x12; BOOL x13; BOOL x14; BOOL x15; } *)a0;
- (id).cxx_construct;

@end
