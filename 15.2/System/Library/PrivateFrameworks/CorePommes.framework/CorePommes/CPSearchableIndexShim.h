@class CSSearchableIndex;
@protocol CPIndex, CSSearchableIndexDelegate;

@interface CPSearchableIndexShim : NSObject {
    id<CPIndex> _index;
    CSSearchableIndex *_spotlightIndex;
}

@property (class, nonatomic) BOOL dualDonationEnabled;

@property (weak) id<CSSearchableIndexDelegate> indexDelegate;

+ (id)userDefaults;
+ (id)signpostLog;
+ (id)defaultSearchableIndex;
+ (id)log;
+ (id)_summaryLoggingStringForSearchableItems:(id)a0;

- (void)indexSearchableItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginIndexBatch;
- (void)_issueCommand:(id)a0 completionHandler:(id /* block */)a1;
- (void)changeStateOfSearchableItemsWithUIDs:(id)a0 toState:(long long)a1;
- (void)endIndexBatchWithClientState:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void)fetchLastClientStateWithCompletionHandler:(id /* block */)a0;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSearchableItemsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithName:(id)a0 protectionClass:(id)a1;
- (id)initWithName:(id)a0 protectionClass:(id)a1 bundleIdentifier:(id)a2;
- (void).cxx_destruct;
- (id)initWithIndex:(id)a0 spotlightIndex:(id)a1;

@end
