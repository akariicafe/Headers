@class SKUIClientContext, SKUIProductInformationView, UIView, NSMutableArray, SKUIDeveloperInfo;

@interface SKUIDeveloperInfoView : UIView {
    UIView *_infoSeparatorView;
    SKUIProductInformationView *_infoView;
    NSMutableArray *_lineViews;
}

@property (readonly, nonatomic) SKUIClientContext *clientContext;
@property (readonly, nonatomic) SKUIDeveloperInfo *developerInfo;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithDeveloperInfo:(id)a0 clientContext:(id)a1;

@end
