@class CSSearchQuery;

@interface WBSSiriIntelligenceHistorySearch : NSObject {
    CSSearchQuery *_searchQuery;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)findURLStringsForHistoryItemsContainingString:(id)a0 completionHandler:(id /* block */)a1;

@end
