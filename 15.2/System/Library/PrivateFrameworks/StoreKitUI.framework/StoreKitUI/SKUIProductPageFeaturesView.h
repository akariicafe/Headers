@class SKUIColorScheme, NSString, SKUIClientContext, UIView, NSMutableArray, UILabel;

@interface SKUIProductPageFeaturesView : UIView {
    UIView *_bottomBorderView;
    NSMutableArray *_featureViews;
    UILabel *_titleLabel;
    UIView *_topBorderView;
}

@property (nonatomic) long long features;
@property (nonatomic) unsigned long long gameCenterFeatures;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (retain, nonatomic) SKUIClientContext *clientContext;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)setFeatures:(long long)a0 gameCenterFeatures:(unsigned long long)a1;
- (id)_gameCenterStringWithFeatures:(unsigned long long)a0;

@end
