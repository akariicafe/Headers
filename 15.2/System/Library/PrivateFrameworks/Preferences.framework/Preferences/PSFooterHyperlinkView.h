@class UITextView, NSString, NSURL, NSLayoutConstraint;

@interface PSFooterHyperlinkView : UITableViewHeaderFooterView <PSHeaderFooterView, UITextViewDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) NSLayoutConstraint *textViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textViewTrailingConstraint;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } linkRange;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (retain, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)_linkify;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_accessibilitySetInterfaceStyleIntent:(unsigned long long)a0;
- (void)setTableView:(id)a0;
- (void)setupSubviewsAndContstraints;
- (void)refreshContentsWithSpecifier:(id)a0;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (id)initWithSpecifier:(id)a0;
- (BOOL)isValidLinkRange;

@end
