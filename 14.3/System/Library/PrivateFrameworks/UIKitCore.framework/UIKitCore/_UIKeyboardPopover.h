@class _UIPopoverView;

@interface _UIKeyboardPopover : UIView <UITextEffectsOrdering> {
    _UIPopoverView *_popoverView;
}

- (int)textEffectsVisibilityLevel;
- (void).cxx_destruct;
- (void)_setRenderConfig:(id)a0;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (id)initWithPopoverView:(id)a0;

@end
