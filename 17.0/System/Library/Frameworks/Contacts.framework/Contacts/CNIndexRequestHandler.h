@class CNContactStore, CNIndexClientState;
@protocol CNCSSearchableIndex, CNSpotlightIndexingLogger;

@interface CNIndexRequestHandler : NSObject {
    BOOL _isFullSyncNeeded;
    CNContactStore *_contactStore;
    id<CNCSSearchableIndex> _index;
    id<CNSpotlightIndexingLogger> _logger;
    unsigned long long _batchSize;
    CNIndexClientState *_clientState;
}

- (void)reindexSearchableItemsWithIdentifiers:(id)a0;
- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (void)performIndexing;
- (id)initWithContactStore:(id)a0 searchableIndex:(id)a1 logger:(id)a2 batchSize:(unsigned long long)a3;
- (void)reindexAllSearchableItems;
- (id)verifyIndexLoggingSummary:(BOOL)a0 error:(id *)a1;

@end
