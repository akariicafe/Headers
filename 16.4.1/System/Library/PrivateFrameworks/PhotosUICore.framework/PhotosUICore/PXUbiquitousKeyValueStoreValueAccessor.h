@class NSString, NSObject, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

@interface PXUbiquitousKeyValueStoreValueAccessor : NSObject {
    id _cachedValue;
    id /* block */ _defaultValueFuture;
    id /* block */ _valueFilter;
    id /* block */ _changeHandler;
}

@property (readonly, nonatomic) NSUbiquitousKeyValueStore *ubiquitousKeyValueStore;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storeQueue;
@property (retain) id currentValue;
@property (readonly) id currentValueIfLoaded;

- (id)_currentValueLoadIfNeeded:(BOOL)a0;
- (void)_setCurrentValue:(id)a0 updateUbiquitousKeyValueStore:(BOOL)a1 notifyChange:(BOOL)a2;
- (void)_keyValueStoreDidChangeExternally:(id)a0;
- (id)initWithUbiquitousKeyValueStore:(id)a0 key:(id)a1 defaultValueFuture:(id /* block */)a2 valueFilter:(id /* block */)a3 changeHandler:(id /* block */)a4;
- (id)init;
- (void)loadValueAsyncIfNeeded;
- (id)description;
- (void)_storeQueue_handleLoadValueAsync;
- (void).cxx_destruct;

@end
