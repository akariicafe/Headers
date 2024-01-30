@class HKSource, UIFont, NSString;

@interface WDDataTableViewCell : UITableViewCell

@property (retain, nonatomic) UIFont *bodyFont;
@property (retain, nonatomic) HKSource *source;
@property (retain, nonatomic) NSString *displayValue;
@property (retain, nonatomic) NSString *dateString;
@property (nonatomic) BOOL displayValueAdjustsFontSizeToFitWidth;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setupUI;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageViewBounds;

@end
