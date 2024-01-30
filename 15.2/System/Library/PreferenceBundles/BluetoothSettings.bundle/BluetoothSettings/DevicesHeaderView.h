@class NSString, UILabel, UIActivityIndicatorView;

@interface DevicesHeaderView : UIView <PSHeaderFooterView>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UILabel *text;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (id)initWithSpecifier:(id)a0;

@end
