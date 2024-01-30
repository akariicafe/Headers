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

- (BOOL)done;
- (void)dealloc;
- (id)error;
- (void)skipDescendants;
- (void).cxx_destruct;
- (id)nextWithError:(id *)a0;
- (id)initWithURL:(id)a0 isDirectory:(BOOL)a1;
- (unsigned long long)numFoldersPopped;

@end
