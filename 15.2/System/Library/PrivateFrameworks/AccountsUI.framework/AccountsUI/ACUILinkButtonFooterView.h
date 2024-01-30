@class ACUILinkButton;

@interface ACUILinkButtonFooterView : UIView <PSHeaderFooterView> {
    ACUILinkButton *_linkButton;
}

@property (nonatomic) long long alignment;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (id)initWithSpecifier:(id)a0;
- (id)initWithButton:(id)a0;

@end
