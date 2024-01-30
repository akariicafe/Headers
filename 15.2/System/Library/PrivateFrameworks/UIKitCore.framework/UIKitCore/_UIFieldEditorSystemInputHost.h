@class _UIFieldEditorSystemInputHostView, UISystemInputViewController, UIVisualEffectView;

@interface _UIFieldEditorSystemInputHost : _UIFieldEditorHost {
    _UIFieldEditorSystemInputHostView *_containerView;
    UIVisualEffectView *_backgroundEffectView;
}

@property (readonly, nonatomic) UISystemInputViewController *_systemInputViewController;

- (void)layoutIfNeeded;
- (BOOL)_isTV;
- (id)description;
- (void).cxx_destruct;
- (id)_viewForHostingFieldEditor;
- (void)addFieldEditor:(id)a0;
- (void)addPlaceholderLabel:(id)a0;
- (void)removeFieldEditor;
- (void)_updateFieldEditorBackgroundViewLayoutForcingDefault:(BOOL)a0;
- (void)dealloc;

@end
