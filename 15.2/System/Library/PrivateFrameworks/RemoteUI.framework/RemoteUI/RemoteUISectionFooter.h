@class RUILinkLabel, NSString, NSURL, UILabel, UIButton;
@protocol RUITableFooterDelegate;

@interface RemoteUISectionFooter : UIView <RemoteUITableFooter> {
    BOOL _usesCustomTextAlignment;
    double _topMarginValue;
}

@property (weak, nonatomic) id<RUITableFooterDelegate> delegate;
@property (retain, nonatomic) NSURL *linkURL;
@property (copy, nonatomic) id /* block */ linkAction;
@property (readonly, nonatomic) RUILinkLabel *linkLabel;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UIButton *linkButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFont:(id)a0;
- (void)layoutSubviews;
- (void)setTextAlignment:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setTopMargin:(double)a0;
- (void)setTextColor:(id)a0;
- (void)setText:(id)a0 attributes:(id)a1;
- (id)initWithAttributes:(id)a0;
- (double)footerHeightForWidth:(double)a0 inView:(id)a1;
- (double)footerHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)_linkPressed;
- (double)_getTopMargin;

@end
