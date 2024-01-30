@class NSString, UITextView;
@protocol SCKPMessageCardSectionViewDelegate;

@interface SCKPMessageCardSectionView : UIView <UITextViewDelegate> {
    UITextView *_textView;
    id<SCKPMessageCardSectionViewDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)displayedText;
- (void)layoutSubviews;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithMessageCardSection:(id)a0 delegate:(id)a1;

@end
