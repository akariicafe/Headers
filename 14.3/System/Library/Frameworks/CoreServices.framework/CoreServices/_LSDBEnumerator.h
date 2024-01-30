@class _LSDatabase, NSError;

@interface _LSDBEnumerator : LSEnumerator {
    struct Context { struct LSContext *_contextPointer; struct LSContext { _LSDatabase *db; } _contextStorage; BOOL _created; NSError *_error; } _context;
    unsigned long long _index;
    id _lastFastObject;
    unsigned char _hasReachedEnd : 1;
    unsigned char _hasTriedToPrepare : 1;
    unsigned char _hasPrepared : 1;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)nextObject;
- (BOOL)prepareIfNeeded;
- (BOOL)_prepareWithContext:(struct LSContext { id x0; } *)a0 error:(id *)a1;
- (BOOL)_getObject:(id *)a0 atIndex:(unsigned long long)a1 context:(struct LSContext { id x0; } *)a2;

@end
