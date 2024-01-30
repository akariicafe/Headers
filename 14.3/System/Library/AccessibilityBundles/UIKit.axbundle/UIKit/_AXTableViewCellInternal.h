@class UITableViewCellAccessibilityElement, NSMutableArray, NSMutableDictionary;

@interface _AXTableViewCellInternal : NSObject {
    NSMutableArray *children;
    BOOL cellOrAncestorHiddenWhileFetchingChildren;
    id removeMinusButton;
    id text;
    id removeConfirmButton;
    id accessoryButton;
    NSMutableArray *mockSubviews;
    UITableViewCellAccessibilityElement *mockParent;
    NSMutableDictionary *_subClassData;
    NSMutableArray *discardedLabels;
}

- (id)init;
- (void).cxx_destruct;

@end
