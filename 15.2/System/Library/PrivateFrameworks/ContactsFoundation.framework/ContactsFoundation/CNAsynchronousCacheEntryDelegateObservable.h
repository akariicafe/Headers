@class NSString, NSMutableArray;

@interface CNAsynchronousCacheEntryDelegateObservable : CNObservable <CNAsynchronousCacheEntryDelegate> {
    NSMutableArray *_observers;
    id _currentValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (void)cacheEntryDidUpdateValue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)subscribe:(id)a0;

@end
