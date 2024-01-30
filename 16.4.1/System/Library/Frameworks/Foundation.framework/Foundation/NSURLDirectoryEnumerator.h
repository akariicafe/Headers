@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {
    struct __CFURLEnumerator { } *_enumerator;
    BOOL shouldContinue;
    BOOL isPostOrderDirectory;
}

@property (copy) id /* block */ errorHandler;

- (id)nextObject;
- (BOOL)isEnumeratingDirectoryPostOrder;
- (void)skipDescendents;
- (id)fileAttributes;
- (id)initWithURL:(id)a0 includingPropertiesForKeys:(id)a1 options:(unsigned long long)a2 errorHandler:(id /* block */)a3;
- (void)dealloc;
- (void)skipDescendants;
- (unsigned long long)level;
- (id)directoryAttributes;

@end
