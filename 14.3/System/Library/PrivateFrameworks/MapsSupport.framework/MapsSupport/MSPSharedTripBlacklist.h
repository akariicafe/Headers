@class NSMutableSet, NSDate, NSUbiquitousKeyValueStore, NSObject;
@protocol OS_dispatch_queue;

@interface MSPSharedTripBlacklist : NSObject {
    NSMutableSet *_blockIDs;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSUbiquitousKeyValueStore *_kvStore;
    NSDate *_lastUpdateDate;
}

- (void)_loadIdentifiers;
- (id)init;
- (void).cxx_destruct;
- (BOOL)containsAnyIdentifiersInArray:(id)a0;
- (void)unblockIdentifiers:(id)a0;
- (BOOL)containsIdentifier:(id)a0;
- (void)blockIdentifier:(id)a0;
- (void)clearList;
- (id)description;
- (void)_storeIdentifiers;
- (void)updateBlockedListFromStore:(id)a0;

@end
