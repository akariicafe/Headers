@class NSString, UILabel;

@interface EKExpandingTextView : UITextView <UITextViewDelegate> {
    UILabel *_placeholderLabel;
    BOOL _allowEnclosingViewScroll;
    struct CGSize { double width; double height; } _previousIntrinsicContentSize;
    struct CGSize { double width; double height; } _previousSizeThatFits;
}

@property (copy, nonatomic) NSString *placeholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFont:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)setTextAlignment:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setAttributedText:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (BOOL)_shouldScrollEnclosingScrollView;
- (void)_updatePlaceholder;

@end
