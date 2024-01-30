@class HKSource, UIFont, NSString;

@interface WDDataTableViewCell : UITableViewCell

@property (retain, nonatomic) UIFont *bodyFont;
@property (retain, nonatomic) HKSource *source;
@property (retain, nonatomic) NSString *displayValue;
@property (retain, nonatomic) NSString *dateString;
@property (nonatomic) BOOL displayValueAdjustsFontSizeToFitWidth;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setupUI;

@end
