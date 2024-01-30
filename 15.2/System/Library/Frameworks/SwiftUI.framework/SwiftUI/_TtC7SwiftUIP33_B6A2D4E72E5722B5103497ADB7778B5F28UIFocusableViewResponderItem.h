@class NSString, NSArray, UIFocusEffect;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface _TtC7SwiftUIP33_B6A2D4E72E5722B5103497ADB7778B5F28UIFocusableViewResponderItem : UIFocusableViewResponderItemBase <UIFocusItem, _UIFocusRegionContainer, _UIFocusItemPrivate> {
    void /* unknown type, empty encoding */ base;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ contentPath;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) NSString *swiftui_focusGroupIdentifier;
@property (nonatomic, readonly) id<UIFocusEnvironment> parentFocusEnvironment;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) id<UIFocusItemContainer> focusItemContainer;
@property (nonatomic, readonly) UIFocusEffect *focusEffect;
@property (nonatomic, readonly) BOOL _wantsFocusRing;

- (id)_regionForFocusedItem:(id)a0 inCoordinateSpace:(id)a1;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (void)setNeedsFocusUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)updateFocusIfNeeded;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end
