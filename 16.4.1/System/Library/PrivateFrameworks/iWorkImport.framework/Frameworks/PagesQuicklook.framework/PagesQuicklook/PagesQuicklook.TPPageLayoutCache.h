@class NSString;

@interface PagesQuicklook.TPPageLayoutCache : NSObject {
    void /* unknown type, empty encoding */ pageLayoutCache;
    void /* unknown type, empty encoding */ pendingUpdates;
    void /* unknown type, empty encoding */ accessQueue;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)coalesce;
- (void)enqueueRemoval:(id)a0;
- (void)enqueueInsertion:(id)a0;
- (id)pageLayouts;
- (id)pageLayoutsFromStartIndex:(unsigned long long)a0;
- (id)pageLayoutsFromStartIndex:(unsigned long long)a0 toEndIndex:(unsigned long long)a1;
- (id)pageLayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)pageLayoutsUpToPageIndex:(unsigned long long)a0;
- (id)pageLayoutsWithPageIndex:(unsigned long long)a0;

@end
