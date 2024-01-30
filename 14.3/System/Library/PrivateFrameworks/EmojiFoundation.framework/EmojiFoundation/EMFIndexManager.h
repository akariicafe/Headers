@class NSLock, NSBundle, EMFInvertedIndex;

@interface EMFIndexManager : NSObject {
    NSBundle *_searchEngineBundle;
    NSLock *_defaultIndexLock;
    NSLock *_stemmedIndexLock;
    BOOL _triedLoadingDefaultIndex;
    BOOL _triedLoadingStemmedIndex;
}

@property (copy, nonatomic) EMFInvertedIndex *defaultIndex;
@property (copy, nonatomic) EMFInvertedIndex *stemmedIndex;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (void)preheatIndexes;

@end
