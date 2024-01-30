@interface _UIAccessibilityFocusUpdateRequest : _UIFocusUpdateRequest

@property (nonatomic) long long options;

- (BOOL)shouldPlayFocusSound;
- (BOOL)requiresNextFocusedItem;

@end
