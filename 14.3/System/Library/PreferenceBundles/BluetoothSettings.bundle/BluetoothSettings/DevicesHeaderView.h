@class NSString, UILabel, UIActivityIndicatorView;

@interface DevicesHeaderView : UIView <PSHeaderFooterView>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UILabel *text;

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (void)layoutSubviews;

@end
