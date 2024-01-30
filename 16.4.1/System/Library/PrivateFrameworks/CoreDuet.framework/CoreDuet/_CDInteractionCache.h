@class NSCountedSet, NSArray, _CDInteractionStore, NSPredicate, NSMutableOrderedSet, NSObject, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _CDInteractionCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_timeOfLastFetch;
    unsigned long long _minCacheSize;
    NSCountedSet *_conversationIDs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableOrderedSet *mutableInteractions;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) id /* block */ filterBlock;
@property (readonly, copy, nonatomic) NSArray *interactions;

- (void)interactionsRecorded:(id)a0;
- (id)uniqueConversationIDs;
- (void)_cacheInteractions:(id)a0;
- (void)_deleteInteractions:(id)a0;
- (void)_countConversationIDsForInteraction:(id)a0 deleted:(BOOL)a1;
- (void)_refetch;
- (void)interactionsDeleted:(id)a0;
- (id)initWithInteractionStore:(id)a0 size:(unsigned long long)a1 queryPredicate:(id)a2 filterBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)debounceRefetch;

@end
