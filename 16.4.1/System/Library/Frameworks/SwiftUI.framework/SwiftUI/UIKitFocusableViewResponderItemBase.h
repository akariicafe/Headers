@class NSString;

@interface UIKitFocusableViewResponderItemBase : NSObject

@property (readonly, nonatomic) NSString *swiftui_focusGroupIdentifier;

- (void)_searchForFocusRegionsInContext:(id)a0;
- (id)focusGroupIdentifier;
- (id)_regionForFocusedItem:(id)a0 inCoordinateSpace:(id)a1;
- (id)swiftui_regionForFocusedItem:(id)a0 inCoordinateSpace:(id)a1;
- (void)swiftui_searchForFocusRegionsInContext:(id)a0;

@end
