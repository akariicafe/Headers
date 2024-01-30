@interface _UIFocusBehavior_CarPlayTouchpad : _UIFocusBehavior_CarPlay

+ (id)sharedInstance;

- (BOOL)refinesIndexBarTargetContentOffset;
- (BOOL)supportsIndirectPanningMovement;
- (BOOL)shouldEnableFocusOnSelect;

@end
