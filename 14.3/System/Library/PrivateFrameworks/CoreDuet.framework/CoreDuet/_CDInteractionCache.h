@class NSArray, _CDInteractionStore, NSPredicate, NSMutableOrderedSet;

@interface _CDInteractionCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableOrderedSet *mutableInteractions;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) id /* block */ filterBlock;
@property (readonly, copy, nonatomic) NSArray *interactions;

- (void).cxx_destruct;
- (void)interactionsRecorded:(id)a0;
- (id)initWithInteractionStore:(id)a0 size:(unsigned long long)a1 queryPredicate:(id)a2 filterBlock:(id /* block */)a3;
- (void)_cacheInteractions:(id)a0;
- (void)_refetch;
- (void)refetch;

@end
