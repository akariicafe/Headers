@class NSURL, NSError;

@interface FPDDiskIterator : FPDIterator {
    NSURL *_rootURL;
    BOOL _stopAccessingRoot;
    BOOL _sentRoot;
    BOOL _lastItemWasPackage;
    BOOL _done;
    NSError *_error;
    unsigned long long _numFoldersPopped;
    struct __CFURLEnumerator { } *_enumerator;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)error;
- (BOOL)done;
- (BOOL)skipMaterializedTreeTraversal;
- (id)nextWithError:(id *)a0;
- (unsigned long long)numFoldersPopped;
- (id)initWithURL:(id)a0 isDirectory:(BOOL)a1;

@end
