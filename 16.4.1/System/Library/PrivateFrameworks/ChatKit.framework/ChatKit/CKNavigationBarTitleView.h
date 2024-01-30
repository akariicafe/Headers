@interface CKNavigationBarTitleView : _UINavigationBarTitleView

@property (nonatomic, getter=isEditing) BOOL editing;

- (void)contentDidChange;
- (void)updateIfNeeded:(BOOL)a0;
- (void)_setTrailingItemsHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateTrailingBarButtonHiddenStateForTitleHeightAnimated:(BOOL)a0;

@end
