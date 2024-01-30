@class _UIPopoverView;

@interface _UIKeyboardPopover : UIView <UITextEffectsOrdering> {
    _UIPopoverView *_popoverView;
}

- (void)_setRenderConfig:(id)a0;
- (id)initWithPopoverView:(id)a0;
- (void).cxx_destruct;
- (int)textEffectsVisibilityLevel;
- (int)textEffectsVisibilityLevelInKeyboardWindow;

@end
