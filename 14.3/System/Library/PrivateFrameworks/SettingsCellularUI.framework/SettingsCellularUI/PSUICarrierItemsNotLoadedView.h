@class UITextView, UILayoutGuide, UIActivityIndicatorView, NSString, UILabel, UIButton;

@interface PSUICarrierItemsNotLoadedView : UIView <UITextViewDelegate, PSHeaderFooterView>

@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *linkTextView;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)setLinkText:(id)a0 url:(id)a1;

@end
