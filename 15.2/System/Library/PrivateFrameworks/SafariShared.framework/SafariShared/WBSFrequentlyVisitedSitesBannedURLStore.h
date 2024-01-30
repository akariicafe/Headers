@class NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WBSFrequentlyVisitedSitesBannedURLStore : NSObject {
    NSURL *_storeURL;
    NSObject<OS_dispatch_queue> *_storeQueue;
    NSMutableDictionary *_bannedURLStringsToEntriesMap;
}

- (void)_historyItemsWereRemoved:(id)a0;
- (void)removeURLStrings:(id)a0;
- (void)_historyWasCleared:(id)a0;
- (id)urlStrings;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_bannedURLStringsToEntriesMap;
- (void)_writeOutBannedURLStringsAsynchronously;
- (void)removeAllURLStrings;
- (id)initWithStoreURL:(id)a0 history:(id)a1;
- (BOOL)containsURLString:(id)a0;
- (void)addURLString:(id)a0;

@end
