@class NSMutableArray;

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {
    NSMutableArray *_contactObservers;
}

- (void)warmUp;
- (id)loadLexicons:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)hibernate;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)unloadLexicons;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (void)removeContactObserver:(id /* block */)a0;

@end
