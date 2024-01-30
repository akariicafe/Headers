@class NSArray, NSDictionary, SBDisplayItem;

@interface SBAppLayoutOverlappingModelCacheKey : NSObject <NSCopying> {
    NSArray *_zOrderedItems;
    NSDictionary *_recordsForItems;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _containerBounds;
    long long _containerOrientation;
    double _floatingDockHeight;
    BOOL _hideStrips;
    BOOL _hideDock;
    SBDisplayItem *_draggingItemIfAny;
    unsigned long long _hash;
}

+ (id)cacheKeyForSnapshotOfAppLayout:(id)a0 containerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 containerOrientation:(long long)a2 floatingDockHeight:(double)a3 hideStrips:(BOOL)a4 hideDock:(BOOL)a5 draggingItem:(id)a6;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithAppLayout:(id)a0 containerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 containerOrientation:(long long)a2 floatingDockHeight:(double)a3 hideStrips:(BOOL)a4 hideDock:(BOOL)a5 draggingItem:(id)a6;

@end
