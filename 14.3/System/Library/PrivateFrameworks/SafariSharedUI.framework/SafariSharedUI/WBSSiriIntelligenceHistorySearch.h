@class CSSearchQuery;

@interface WBSSiriIntelligenceHistorySearch : NSObject {
    CSSearchQuery *_searchQuery;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)findURLStringsForHistoryItemsContainingString:(id)a0 completionHandler:(id /* block */)a1;

@end
