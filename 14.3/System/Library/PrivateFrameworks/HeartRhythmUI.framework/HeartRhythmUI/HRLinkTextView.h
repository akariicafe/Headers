@class UITapGestureRecognizer, UITextView;
@protocol HRLinkTextViewDelegate;

@interface HRLinkTextView : UIView

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } linkRange;
@property (nonatomic) long long URLIdentifier;
@property (weak, nonatomic) id<HRLinkTextViewDelegate> delegate;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) long long currentUserInterfaceStyle;
@property (copy, nonatomic) id /* block */ userInterfaceStyleChanged;
@property (retain, nonatomic) UITextView *textView;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (id)firstBaselineAnchor;
- (void)layoutSubviews;
- (id)lastBaselineAnchor;
- (void)_setUpUI;
- (void)_updateCurrentUserInterfaceStyleIfNeeded;
- (id)initWithLinkRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 URLIdentifier:(long long)a1 delegate:(id)a2 userInterfaceStyleChanged:(id /* block */)a3;
- (void)linkTextViewTapped:(id)a0;
- (id)initWithLinkRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 URLIdentifier:(long long)a1 delegate:(id)a2;

@end
