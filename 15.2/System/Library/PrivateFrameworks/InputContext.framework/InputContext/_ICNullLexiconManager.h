@class NSMutableArray;

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {
    NSMutableArray *_contactObservers;
}

- (void)warmUp;
- (id)loadLexicons:(id /* block */)a0;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (void)hibernate;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unloadLexicons;
- (id)loadLexicons;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (void)removeContactObserver:(id /* block */)a0;
- (id)test_loadLexicons;

@end
