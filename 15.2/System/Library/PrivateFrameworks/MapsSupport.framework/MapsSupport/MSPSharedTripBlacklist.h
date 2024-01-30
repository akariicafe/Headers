@class NSMutableSet, NSDate, NSUbiquitousKeyValueStore, NSObject;
@protocol OS_dispatch_queue;

@interface MSPSharedTripBlacklist : NSObject {
    NSMutableSet *_blockIDs;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSUbiquitousKeyValueStore *_kvStore;
    NSDate *_lastUpdateDate;
}

- (void)updateBlockedListFromStore:(id)a0;
- (id)description;
- (BOOL)containsIdentifier:(id)a0;
- (void)_loadIdentifiers;
- (void).cxx_destruct;
- (id)init;
- (void)unblockIdentifiers:(id)a0;
- (BOOL)containsAnyIdentifiersInArray:(id)a0;
- (void)blockIdentifier:(id)a0;
- (void)_storeIdentifiers;
- (void)clearList;

@end
