@class NSMutableDictionary, UITableTextAccessibilityElement, UITableViewCellAccessibilityElement, NSMutableArray, UIAccessibilityElementMockView;

@interface _AXTableViewCellInternal : NSObject {
    NSMutableArray *children;
    BOOL cellOrAncestorHiddenWhileFetchingChildren;
    UIAccessibilityElementMockView *removeMinusButton;
    UITableTextAccessibilityElement *text;
    UIAccessibilityElementMockView *removeConfirmButton;
    id accessoryButton;
    NSMutableArray *mockSubviews;
    UITableViewCellAccessibilityElement *mockParent;
    NSMutableDictionary *_subClassData;
    NSMutableArray *discardedLabels;
}

- (id)init;
- (void).cxx_destruct;

@end
