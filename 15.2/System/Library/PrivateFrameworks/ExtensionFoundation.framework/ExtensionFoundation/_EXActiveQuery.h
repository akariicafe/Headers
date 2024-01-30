@class _EXQuery, NSSet, NSMutableSet, _EXDiscoveryController;

@interface _EXActiveQuery : NSObject

@property (readonly) NSMutableSet *internalObservers;
@property (readonly, weak) _EXDiscoveryController *discoveryController;
@property (retain) NSSet *currentUUIDs;
@property (readonly) NSSet *observers;
@property (readonly) _EXQuery *query;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)description;
- (void)update;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithQuery:(id)a0 discoveryController:(id)a1;
- (BOOL)isEqualToActiveQuery:(id)a0;

@end
