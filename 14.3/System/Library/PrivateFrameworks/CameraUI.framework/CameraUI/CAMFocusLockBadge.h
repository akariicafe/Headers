@interface CAMFocusLockBadge : CEKBadgeTextView

@property (nonatomic, getter=isFocusLocked) BOOL focusLocked;
@property (nonatomic, getter=isExposureLocked) BOOL exposureLocked;

- (void)_updateText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
