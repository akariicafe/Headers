@interface WebValidationBubbleTapRecognizer : NSObject {
    struct RetainPtr<UIViewController> { void *m_ptr; } _popoverController;
    struct RetainPtr<UITapGestureRecognizer> { void *m_ptr; } _tapGestureRecognizer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithPopoverController:(id)a0;
- (void)dismissPopover;

@end
