@class NSArray, NSMutableArray, _KSTextReplacementClientStore;

@interface TIUserWordsManager : NSObject {
    _KSTextReplacementClientStore *_textReplacementStore;
    NSMutableArray *_observers;
}

@property (retain, nonatomic) NSArray *cache;
@property (readonly, retain, nonatomic) NSArray *entries;

- (id)addObserver:(id /* block */)a0;
- (void)addEntries:(id)a0 removeEntries:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)requestSync;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)dealloc;
- (void)notifyObserversOfChange;

@end
