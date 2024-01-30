@class NSArray;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface _TtC7SwiftUIP33_B6A2D4E72E5722B5103497ADB7778B5F28UIFocusableViewResponderItem : NSObject <UIFocusItem, _UIFocusRegionContainer> {
    void /* unknown type, empty encoding */ base;
    void /* unknown type, empty encoding */ host;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) id<UIFocusEnvironment> parentFocusEnvironment;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) id<UIFocusItemContainer> focusItemContainer;

- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
- (id)_regionForFocusedItem:(id)a0 inCoordinateSpace:(id)a1;

@end
