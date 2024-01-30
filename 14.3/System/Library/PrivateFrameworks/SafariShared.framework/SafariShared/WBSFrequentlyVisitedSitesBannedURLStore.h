@class NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WBSFrequentlyVisitedSitesBannedURLStore : NSObject {
    NSURL *_storeURL;
    NSObject<OS_dispatch_queue> *_storeQueue;
    NSMutableDictionary *_bannedURLStringsToEntriesMap;
}

- (void)_historyItemsWereRemoved:(id)a0;
- (void).cxx_destruct;
- (void)_historyWasCleared:(id)a0;
- (void)dealloc;
- (BOOL)containsURLString:(id)a0;
- (id)urlStrings;
- (id)_bannedURLStringsToEntriesMap;
- (void)addURLString:(id)a0;
- (void)_writeOutBannedURLStringsAsynchronously;
- (void)removeAllURLStrings;
- (id)initWithStoreURL:(id)a0 history:(id)a1;
- (void)removeURLStrings:(id)a0;

@end
