@class NSURL, NSString, RUIWebContainerView;
@protocol RUITableFooterDelegate;

@interface RUIHTMLFooterView : UIView <RUIWebContainerViewDelegate, RemoteUITableFooter> {
    RUIWebContainerView *_webContainerView;
}

@property (weak, nonatomic) id<RUITableFooterDelegate> delegate;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttributes:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)footerHeightForWidth:(double)a0 inTableView:(id)a1;
- (double)footerHeightForWidth:(double)a0 inView:(id)a1;
- (void)setText:(id)a0 attributes:(id)a1;
- (void)webContainerView:(id)a0 didClickLinkWithURL:(id)a1;

@end
