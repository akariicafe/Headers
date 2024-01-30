@interface _TtCV10WorkflowUI17DictationTextView11Coordinator : NSObject <UITextViewDelegate> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ isEditing;
    void /* unknown type, empty encoding */ isDictating;
    void /* unknown type, empty encoding */ textView;
}

- (void).cxx_destruct;
- (id)init;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;

@end
