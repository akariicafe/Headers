@class NSString, NSURL, UITextView;

@interface PSUIFooterHyperlinkView : UITableViewHeaderFooterView <UITextViewDelegate, PSHeaderFooterView>

@property (retain, nonatomic) NSString *text;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } linkRange;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) UITextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithSpecifier:(id)a0;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)refreshContentsWithSpecifier:(id)a0;
- (void)_accessibilitySetInterfaceStyleIntent:(unsigned long long)a0;
- (void)_linkify;
- (void)setupSubviewsAndContstraints;
- (void).cxx_destruct;
- (BOOL)isValidLinkRange;

@end
