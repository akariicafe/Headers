@interface _TtC14WorkflowUICoreP33_ADA1693FF2F04294CDA6C6AEEFEF892F13UIKitTextView : UITextView {
    void /* unknown type, empty encoding */ allowsMultipleLines;
    void /* unknown type, empty encoding */ pasteboardDelegate;
}

@property (nonatomic) BOOL scrollEnabled;

- (void)paste:(id)a0;
- (BOOL)isScrollEnabled;
- (void)cut:(id)a0;
- (void)copy:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)processedEditing;

@end
