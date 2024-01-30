@interface WebValidationBubbleTapRecognizer : NSObject {
    struct RetainPtr<UIViewController> { void *m_ptr; } _popoverController;
    struct RetainPtr<UITapGestureRecognizer> { void *m_ptr; } _tapGestureRecognizer;
}

- (void).cxx_destruct;
- (id)initWithPopoverController:(id)a0;
- (void)dealloc;
- (void)dismissPopover;
- (id).cxx_construct;

@end
