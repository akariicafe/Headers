@class NSURL, NSString, RUIWebContainerView;
@protocol RUIHeaderDelegate;

@interface RUIHTMLHeaderView : UIView <RUIWebContainerViewDelegate, RUIHeader> {
    RUIWebContainerView *_webContainerView;
    BOOL _isFirstSection;
}

@property (weak, nonatomic) id<RUIHeaderDelegate> delegate;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttributes:(id)a0;
- (void).cxx_destruct;
- (double)headerHeightForWidth:(double)a0 inView:(id)a1;
- (void)setSectionIsFirst:(BOOL)a0;
- (void)layoutSubviews;
- (void)setText:(id)a0 attributes:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)webContainerView:(id)a0 didClickLinkWithURL:(id)a1;

@end
