@class NSString, UITextView, NSObject;
@protocol UITextViewDelegate;

@interface WFTextScrollView : UIScrollView <UITextViewDelegate>

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (readonly, nonatomic) UITextView *textView;
@property (nonatomic, getter=isAdjustmentEnabled) BOOL adjustmentEnabled;
@property (weak, nonatomic) NSObject<UITextViewDelegate> *textViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (BOOL)isFirstResponder;
- (id)initWithTextView:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)canBecomeFocused;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textUpdated;

@end
