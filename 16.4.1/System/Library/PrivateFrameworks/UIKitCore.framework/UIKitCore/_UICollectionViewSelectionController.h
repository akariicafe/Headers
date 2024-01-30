@class NSMutableSet;

@interface _UICollectionViewSelectionController : NSObject {
    NSMutableSet *_selectedIndexPaths;
    NSMutableSet *_highlightedIndexPaths;
    NSMutableSet *_nonvisibleTrackedSelectedIdentifiers;
    BOOL _allowsMultipleSelection;
}

- (id)init;
- (void).cxx_destruct;

@end
