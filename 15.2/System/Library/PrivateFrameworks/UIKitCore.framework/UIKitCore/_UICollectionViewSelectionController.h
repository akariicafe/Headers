@class NSMutableSet;

@interface _UICollectionViewSelectionController : NSObject {
    NSMutableSet *_selectedIndexPaths;
    NSMutableSet *_highlightedIndexPaths;
    NSMutableSet *_nonvisibleTrackedSelectedIdentifiers;
    BOOL _allowsMultipleSelection;
}

- (void).cxx_destruct;
- (id)init;

@end
