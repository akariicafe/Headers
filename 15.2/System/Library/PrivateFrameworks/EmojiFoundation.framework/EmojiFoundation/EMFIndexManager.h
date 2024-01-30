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

- (id)initWithBundle:(id)a0;
- (void).cxx_destruct;
- (void)preheatIndexes;

@end
