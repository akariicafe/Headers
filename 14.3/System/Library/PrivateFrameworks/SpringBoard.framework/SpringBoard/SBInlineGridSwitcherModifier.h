@class NSString, _SBInlineGridFloorSwitcherModifier, SBGridLayoutSwitcherModifier;

@interface SBInlineGridSwitcherModifier : SBSwitcherModifier {
    NSString *_bundleIdentifier;
    unsigned long long _scrollAxis;
    struct CGSize { double width; double height; } _fixedCardSize;
    double _cardScale;
    BOOL _floating;
    BOOL _overlay;
    SBGridLayoutSwitcherModifier *_gridLayoutModifier;
    _SBInlineGridFloorSwitcherModifier *_floorModifier;
    unsigned long long _initialScrollAxis;
    struct CGSize { double width; double height; } _initialCardSize;
    double _initialCardScale;
    BOOL _hasScrolledToInitialAppLayoutForTransitionIntoSwitcher;
    unsigned long long _ongoingAppLayoutRemovals;
}

- (id)visibleAppLayouts;
- (unsigned long long)scrollAxis;
- (unsigned long long)numberOfRows;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)handleTapOutsideToDismissEvent:(id)a0;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (void)didMoveToParentModifier:(id)a0;
- (id)handleTapAppLayoutEvent:(id)a0;
- (id)handleRemovalEvent:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 scrollAxis:(unsigned long long)a1 fixedCardSize:(struct CGSize { double x0; double x1; })a2 cardScale:(double)a3 floating:(BOOL)a4 overlay:(BOOL)a5;
- (double)cardScale;
- (struct CGSize { double x0; double x1; })fixedCardSize;
- (id)handleInlineTransitionEvent:(id)a0;
- (id)gridLayoutModifier;

@end
