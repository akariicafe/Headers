@interface WKColorPopover : WKFormRotatingAccessoryPopover <WKFormControl> {
    struct RetainPtr<NSObject<WKFormControl> > { void *m_ptr; } _innerControl;
}

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id).cxx_construct;

@end
