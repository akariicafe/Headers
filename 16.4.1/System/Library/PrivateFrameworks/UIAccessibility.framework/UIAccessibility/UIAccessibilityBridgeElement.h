@class NSData, NSArray;
@protocol UIAccessibilityBridgeAXActionHandler;

@interface UIAccessibilityBridgeElement : UIAccessibilityElement

@property (nonatomic) BOOL isAXScrollAncestor;
@property (retain, nonatomic) NSData *elementRefData;
@property (weak, nonatomic) id<UIAccessibilityBridgeAXActionHandler> axActionHandler;
@property (retain, nonatomic) NSArray *accessibilityActionsForRemoteDevice;

- (void).cxx_destruct;
- (BOOL)_accessibilityIsScrollAncestor;
- (void)overrideAccessibilityMethodsForRemoteDevice;

@end
