@class NSMutableDictionary, NSMutableIndexSet;

@interface _UICollectionLayoutSolveParameters : NSObject <NSCopying> {
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxillaryDict;
    BOOL _isFullResolve;
    struct CGPoint { double x; double y; } _scrollOffset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleBounds;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
