@class NSString, UITextView;
@protocol WFTextField, UITextViewDelegate;

@interface WFTextScrollView : UIScrollView <UITextViewDelegate>

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (readonly, nonatomic) UITextView<WFTextField> *textView;
@property (weak, nonatomic) id<UITextViewDelegate> textViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)textViewDidBeginEditing:(id)a0;
- (id)initWithTextView:(id)a0;
- (BOOL)textViewShouldEndEditing:(id)a0;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textUpdated;

@end
