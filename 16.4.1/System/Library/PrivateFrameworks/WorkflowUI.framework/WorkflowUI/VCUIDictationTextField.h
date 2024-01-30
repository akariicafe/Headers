@interface VCUIDictationTextField : UITextView

+ (double)bottomPadding;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)startDictation;
- (void)setAttributedPlaceholder:(id)a0;
- (id)placeholderLabel;
- (void)dictationDidFinish:(id)a0;

@end
