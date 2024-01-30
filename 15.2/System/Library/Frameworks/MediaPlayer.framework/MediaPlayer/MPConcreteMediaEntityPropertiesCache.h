@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, MPMediaLibraryDataProvider;

@interface MPConcreteMediaEntityPropertiesCache : NSObject {
    NSMutableDictionary *_properties;
    NSMutableDictionary *_valuePersistenceBlocks;
    NSObject<OS_dispatch_queue> *_propertiesQueue;
}

@property (readonly, weak, nonatomic) id<MPMediaLibraryDataProvider> dataProvider;
@property (readonly, nonatomic) Class dataProviderEntityClass;
@property (readonly, nonatomic) long long identifier;

- (void)delete;
- (id)initWithLibraryDataProvider:(id)a0 dataProviderEntityClass:(Class)a1 identifier:(long long)a2;
- (void)_onBarrierCacheValues:(id)a0 persistValueInBackgroundBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)cachePropertyValues:(id)a0 forProperties:(id)a1 persistValueInBackgroundBlock:(id /* block */)a2;
- (void)cacheValue:(id)a0 forProperty:(id)a1 persistValueInBackgroundBlock:(id /* block */)a2;
- (id)valueForProperty:(id)a0 isCached:(BOOL *)a1;

@end
