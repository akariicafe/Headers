@class NSString;
@protocol _ICLexiconManaging;

@interface TITransientLexiconManager : NSObject <TITransientLexiconManaging> {
    struct _LXLexicon { } *_namedEntityLexiconRef;
    struct _LXLexicon { } *_namedEntityPhraseLexiconRef;
    id<_ICLexiconManaging> _inputContextLexiconManager;
    BOOL _lexiconsLoaded;
}

@property (readonly, nonatomic) const struct _LXLexicon { } *namedEntityLexicon;
@property (readonly, nonatomic) const struct _LXLexicon { } *namedEntityPhraseLexicon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)singletonInstance;
+ (void)setSharedTITransientLexiconManager:(id)a0;
+ (id)getEntries:(struct _LXLexicon { } *)a0;

- (void)keyboardActivityDidTransition:(id)a0;
- (BOOL)searchHelper:(struct _LXLexicon { } *)a0 forWord:(struct __CFString { } *)a1 caseSensitive:(BOOL)a2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getOnce:(id /* block */)a0;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)loadLexicons;
- (void)handleMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;
- (BOOL)searchForWordCaseInsensitive:(id)a0;
- (void)debugLogEntities;
- (BOOL)searchForWord:(id)a0;
- (void)removeContactObserver:(id /* block */)a0;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;

@end
