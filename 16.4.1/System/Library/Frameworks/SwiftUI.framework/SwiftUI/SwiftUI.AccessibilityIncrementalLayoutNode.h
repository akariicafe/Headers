@class NSArray;

@interface SwiftUI.AccessibilityIncrementalLayoutNode : SwiftUI.AccessibilityNode

@property (nonatomic, copy) NSArray *accessibilityElements;

- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilitySupplementaryFooterViews;

@end
