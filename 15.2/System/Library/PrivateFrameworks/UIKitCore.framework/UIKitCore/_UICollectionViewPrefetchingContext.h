@class NSArray, NSMutableArray, NSMutableDictionary;

@interface _UICollectionViewPrefetchingContext : NSObject {
    NSArray *_remainingIndexPaths;
    NSMutableArray *_items;
    NSMutableDictionary *_itemsDict;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _prefetchRect;
}

- (void).cxx_destruct;

@end
