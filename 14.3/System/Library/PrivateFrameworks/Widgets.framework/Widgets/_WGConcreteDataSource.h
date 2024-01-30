@class NSArray, NSMutableArray, NSMutableDictionary;

@interface _WGConcreteDataSource : NSObject {
    NSMutableArray *_observers;
    NSMutableDictionary *_identifiersToData;
}

@property (readonly, nonatomic) NSArray *dataIdentifiers;
@property (readonly, nonatomic) NSArray *data;

- (id)init;
- (void).cxx_destruct;
- (id)datumWithIdentifier:(id)a0;
- (void)addObserver:(id)a0 completion:(id /* block */)a1;
- (void)dataSource:(id)a0 removeDatumWithIdentifier:(id)a1 observerUpdateBlock:(id /* block */)a2;
- (void)removeObserver:(id)a0 completion:(id /* block */)a1;
- (void)dataSource:(id)a0 replaceWithDatum:(id)a1 observerUpdateBlock:(id /* block */)a2;

@end
