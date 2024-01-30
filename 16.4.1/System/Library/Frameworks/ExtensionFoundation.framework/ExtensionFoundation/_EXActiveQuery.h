@class _EXQuery, NSSet, NSMutableSet, _EXDiscoveryController;

@interface _EXActiveQuery : NSObject

@property (readonly) NSMutableSet *internalObservers;
@property (readonly) NSMutableSet *internalNewObservers;
@property (readonly, weak) _EXDiscoveryController *discoveryController;
@property (retain) NSSet *currentUUIDs;
@property (readonly) NSSet *observers;
@property (readonly) _EXQuery *query;

- (void)addObserver:(id)a0;
- (id)initWithQuery:(id)a0 discoveryController:(id)a1;
- (void)update;
- (BOOL)isEqualToActiveQuery:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)removeObserver:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
