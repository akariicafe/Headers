@class NSSortDescriptor, NSArray, NSMutableArray, NSManagedObjectContext;
@protocol PHResourceChooserAsset;

@interface PHResourceChooserList : NSObject {
    id<PHResourceChooserAsset> _asset;
    id /* block */ _itemHandler;
    id /* block */ _endOfListHandler;
    long long _hintDataCurrentOffset;
    long long _hintDataNextItemOffset;
    BOOL _finishedPresentingFromHints;
    BOOL _didObserveThumbnailStoreKey;
    NSSortDescriptor *_sortDescriptor;
    NSManagedObjectContext *_context;
    NSArray *_nonHintResources;
    NSArray *_unvisitedNonHintResources;
    unsigned long long _lastPresentedFullResourceIndex;
    BOOL _finishedPresentingFromFetchedResources;
    NSMutableArray *_visitedKeys;
    unsigned long long _enumerationDirection;
}

- (void)moveFirst;
- (void).cxx_destruct;
- (id)init;
- (BOOL)reversed;
- (void)continueEnumeratingWithSourceOptions:(unsigned long long)a0;

@end
