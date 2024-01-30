@class NSArray;

@interface _TtCC7SwiftUI17HostingScrollView22PlatformGroupContainer : UIView <UIFocusItem, UIFocusItemContainer, _UIFocusRegionContainer> {
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ _focusableBounds;
    void /* unknown type, empty encoding */ _focusableFillerBounds;
    void /* unknown type, empty encoding */ _focusableBorder;
    void /* unknown type, empty encoding */ fillerItems;
    void /* unknown type, empty encoding */ requestedFocusItem;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

+ (BOOL)_supportsInvalidatingFocusCache;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCoordinateSpace:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
