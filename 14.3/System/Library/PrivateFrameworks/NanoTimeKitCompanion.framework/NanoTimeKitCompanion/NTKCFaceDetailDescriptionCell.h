@class NSString, UITextView, NSAttributedString;

@interface NTKCFaceDetailDescriptionCell : NTKCDetailTableViewCell <UITextViewDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)init;
- (void).cxx_destruct;
- (id)_fontDescriptor;
- (double)rowHeight;
- (void)layoutSubviews;
- (void)_fontSizeDidChange;

@end
